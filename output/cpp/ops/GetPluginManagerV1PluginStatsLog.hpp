#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Write the current plugin stats for the log file.
  void GetPluginManagerV1PluginStatsLog (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/plugin-manager/v1/plugin-stats/log";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
