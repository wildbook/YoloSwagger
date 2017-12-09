#pragma once
#include "../client.hpp"
#include ".hpp"
#include "LogSeverityLevels.hpp"
namespace leagueapi {
  //Initializes the logging system.
  void LoggingStart (const ClientInfo& info,
    //Specifies whether logs will be buffered for LoggingGetEntries to work
    const std::optional<bool>& buffered = std::nullopt,
    //Minimum severity level to fire a log event
    const std::optional<LogSeverityLevels_t>& severity = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/LoggingStart";
    Headers query;
    if({0})
      query["buffered"] = *buffered;
    if({0})
      query["severity"] = *severity;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
