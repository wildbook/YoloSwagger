#pragma once
#include "../client.hpp"
#include "LolLootRecipe.hpp"
namespace leagueapi {
  std::vector<LolLootRecipe_t> GetLolLootV1RecipesInitialItemByLootId (const ClientInfo& info,
    const std::string& lootId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-loot/v1/recipes/initial-item/"+UrlCode::encode(to_string(lootId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
