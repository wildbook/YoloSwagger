#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolEsportStreamNotificationsV1SendStats (const ClientInfo& info,
    const std::string& eventType,
    const std::string& matchId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-esport-stream-notifications/v1/send-stats";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
