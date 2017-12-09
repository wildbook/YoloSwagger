#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json DeleteLolLootV1PlayerLootByLootIdNewNotification (const ClientInfo& info,
    const std::string& lootId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-loot/v1/player-loot/"+UrlCode::encode(to_string(lootId))+"/new-notification";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
