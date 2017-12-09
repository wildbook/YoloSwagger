#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Exits the application and runs a given executable just before it shuts down.
  void PostProcessControlV1ProcessExitAndRun (const ClientInfo& info,
    const std::string& executablePath,
    const std::string& workingDir,
    const std::vector<std::string>& args)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/x-www-form-urlencoded";
    const std::string body = body = UrlCode::encode(to_string(args));
    std::string path = "/process-control/v1/process/exit-and-run";
    Headers query;
      query["executablePath"] = executablePath;
      query["workingDir"] = workingDir;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
