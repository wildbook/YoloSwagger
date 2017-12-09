#pragma once
#include "../client.hpp"
#include "LolEsportStreamNotificationsESportsLiveStreams.hpp"
namespace leagueapi {
  LolEsportStreamNotificationsESportsLiveStreams_t GetLolEsportStreamNotificationsV1LiveStreams (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-esport-stream-notifications/v1/live-streams";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
