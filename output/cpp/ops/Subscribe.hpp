#pragma once
#incldue "../client.hpp"
#include "RemotingSerializedFormat.hpp"
namespace leagueapi {
  //Subscribes to a given event
  nlohmann::json Subscribe (const ClientInfo& info,
    //Name of the event to subscribe to
    const std::string& eventName,
    //Desired format to receive events in. If unspecified, events will be sent in the active result format at the time.
    const std::optional<RemotingSerializedFormat_t>& format = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/Subscribe?eventName=" + UrlCode::encode(to_string(eventName));
    if(format) {
      path.append("&format="+UrlCode::encode(to_string(*format)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
