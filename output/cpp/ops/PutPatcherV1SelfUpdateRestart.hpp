#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json PutPatcherV1SelfUpdateRestart (const ClientInfo& info,
    const bool& forceRestartOnSelfUpdate)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/patcher/v1/self-update-restart";
    Headers query;
      query["forceRestartOnSelfUpdate"] = forceRestartOnSelfUpdate;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
