#pragma once
#include "../client.hpp"
#include "LolLootPlayerLootUpdate.hpp"
namespace leagueapi {
  LolLootPlayerLootUpdate_t PostLolLootV1RecipesByRecipeNameCraft (const ClientInfo& info,
    const std::string& recipeName,
    const std::vector<std::string>& playerLootList,
    const std::optional<int32_t>& repeat = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(playerLootList).dump();
    std::string path = "/lol-loot/v1/recipes/"+UrlCode::encode(to_string(recipeName))+"/craft";
    Headers query;
    if({0})
      query["repeat"] = *repeat;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
