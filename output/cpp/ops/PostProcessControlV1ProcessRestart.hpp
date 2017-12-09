#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Restarts the application.  Does nothing if there is already a waiting delayed restart.  Optionally accepts specific version to restart.
  void PostProcessControlV1ProcessRestart (const ClientInfo& info,
    const uint32_t& delaySeconds,
    const std::optional<uint32_t>& restartVersion = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/process-control/v1/process/restart";
    Headers query;
      query["delaySeconds"] = delaySeconds;
    if({0})
      query["restartVersion"] = *restartVersion;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
