#pragma once
#incldue "../client.hpp"
#include "LolLootPlayerLootUpdate.hpp"
namespace leagueapi {
  LolLootPlayerLootUpdate_t PostLolLootV1RecipesByRecipeNameCraft (const ClientInfo& info,
    const std::string_t& recipeName,
    const std::vector<std::string>& playerLootList,
    const std::optional<int32_t_t>& repeat = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(playerLootList).dump();
    std::string path = "/lol-loot/v1/recipes/"+UrlCode::encode(to_string(recipeName))+"/craft";
    bool first = true;
    if(repeat) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("repeat="+UrlCode::encode(to_string(*repeat)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
