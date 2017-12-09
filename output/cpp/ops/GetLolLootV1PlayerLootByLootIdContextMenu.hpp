#pragma once
#include "../client.hpp"
#include "LolLootContextMenu.hpp"
namespace leagueapi {
  std::vector<LolLootContextMenu_t> GetLolLootV1PlayerLootByLootIdContextMenu (const ClientInfo& info,
    const std::string& lootId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-loot/v1/player-loot/"+UrlCode::encode(to_string(lootId))+"/context-menu";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
