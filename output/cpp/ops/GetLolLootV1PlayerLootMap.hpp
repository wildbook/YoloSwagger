#pragma once
#include "../client.hpp"
#include "LolLootPlayerLoot.hpp"
namespace leagueapi {
  std::map<std::string, LolLootPlayerLoot_t> GetLolLootV1PlayerLootMap (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-loot/v1/player-loot-map";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
