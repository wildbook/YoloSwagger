#pragma once
#include "../client.hpp"
#include "LogEvent.hpp"
namespace leagueapi {
  //Gets all buffered log entries since the last call.
  std::vector<LogEvent_t> LoggingGetEntries (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/LoggingGetEntries";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
