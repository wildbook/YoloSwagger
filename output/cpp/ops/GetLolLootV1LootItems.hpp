#pragma once
#incldue "../client.hpp"
#include "LolLootLootItem.hpp"
namespace leagueapi {
  std::vector<LolLootLootItem_t> GetLolLootV1LootItems (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-loot/v1/loot-items";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
