#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Adds a new event to be sent to Dradis and/or other analytics/monitoring data sinks. All events will have their eventType prefixed with ""
  void PostTelemetryV1EventsByEventType (const ClientInfo& info,
    //The name of the event type
    const std::string& eventType,
    //A map of event data
    const std::map<std::string, nlohmann::json>& eventData)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(eventData).dump();
    const std::string path = "/telemetry/v1/events/"+UrlCode::encode(to_string(eventType))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
