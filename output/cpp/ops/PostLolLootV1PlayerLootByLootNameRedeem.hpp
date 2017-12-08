#pragma once
#incldue "../client.hpp"
#include "LolLootPlayerLootUpdate.hpp"
namespace leagueapi {
  LolLootPlayerLootUpdate_t PostLolLootV1PlayerLootByLootNameRedeem (const ClientInfo& info,
    const std::string& lootName)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-loot/v1/player-loot/"+UrlCode::encode(to_string(lootName))+"/redeem";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
