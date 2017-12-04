#ifndef SWAGGER_TYPES_PlayerLootDefinitionsDTO_HPP
#define SWAGGER_TYPES_PlayerLootDefinitionsDTO_HPP
#include <json.hpp>
#include "PlayerLootDTO.hpp"
#include "QueryResultDTO.hpp"
#include "LootItemListClientDTO.hpp"
#include "LootLcdsRecipeListClientDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerLootDefinitionsDTO {
    // 
    LootItemListClientDTO lootItemList;
    // 
    std::vector<PlayerLootDTO> playerLoot;
    // 
    QueryResultDTO queryResult;
    // 
    LootLcdsRecipeListClientDTO recipeList;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDefinitionsDTO& v) {
    j["lootItemList"] = v.lootItemList;
    j["playerLoot"] = v.playerLoot;
    j["queryResult"] = v.queryResult;
    j["recipeList"] = v.recipeList;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDefinitionsDTO& v) {
    v.lootItemList = j.at("lootItemList").get<LootItemListClientDTO>;
    v.playerLoot = j.at("playerLoot").get<std::vector<PlayerLootDTO>>;
    v.queryResult = j.at("queryResult").get<QueryResultDTO>;
    v.recipeList = j.at("recipeList").get<LootLcdsRecipeListClientDTO>;
  }

}
#endif // SWAGGER_TYPES_PlayerLootDefinitionsDTO_HPP
