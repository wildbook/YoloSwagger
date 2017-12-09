#pragma once
#include "../client.hpp"
#include "LolPlayerBehaviorRestrictionNotification.hpp"
namespace leagueapi {
  LolPlayerBehaviorRestrictionNotification_t GetLolPlayerBehaviorV1RankedRestriction (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-player-behavior/v1/ranked-restriction";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
