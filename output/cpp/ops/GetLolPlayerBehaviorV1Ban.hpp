#pragma once
#include "../client.hpp"
#include "LolPlayerBehaviorBanNotification.hpp"
namespace leagueapi {
  LolPlayerBehaviorBanNotification_t GetLolPlayerBehaviorV1Ban (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-player-behavior/v1/ban";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
