#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Adds a new event to be sent to Dradis and/or other analytics/monitoring data sinks. This will include current performance information along with the passed in data. Each call will record the performance counters then reset them for use in the next call. All events will have their eventType prefixed with ""
  void PostTelemetryV1EventsWithPerfInfoByEventType (const ClientInfo& info,
    //The name of the event type
    const std::string& eventType,
    //A map of event data
    const std::map<std::string, nlohmann::json>& eventData)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(eventData).dump();
    std::string path = "/telemetry/v1/events-with-perf-info/"+UrlCode::encode(to_string(eventType))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
