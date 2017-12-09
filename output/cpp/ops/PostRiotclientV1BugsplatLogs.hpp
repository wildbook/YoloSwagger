#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Adds the enclosed log to the app's bugsplat report.
  void PostRiotclientV1BugsplatLogs (const ClientInfo& info,
    //Full path to the log file.
    const std::string& logFilePath)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(logFilePath).dump();
    std::string path = "/riotclient/v1/bugsplat/logs";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
