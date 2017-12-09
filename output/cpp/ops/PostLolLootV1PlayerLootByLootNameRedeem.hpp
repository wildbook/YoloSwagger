#pragma once
#include "../client.hpp"
#include "LolLootPlayerLootUpdate.hpp"
namespace leagueapi {
  LolLootPlayerLootUpdate_t PostLolLootV1PlayerLootByLootNameRedeem (const ClientInfo& info,
    const std::string& lootName)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-loot/v1/player-loot/"+UrlCode::encode(to_string(lootName))+"/redeem";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
