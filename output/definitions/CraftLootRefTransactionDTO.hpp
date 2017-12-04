#ifndef SWAGGER_TYPES_CraftLootRefTransactionDTO_HPP
#define SWAGGER_TYPES_CraftLootRefTransactionDTO_HPP
#include <json.hpp>
#include "LootNameRefId.hpp"
namespace leagueapi {
  // 
  struct CraftLootRefTransactionDTO {
    // 
    std::vector<LootNameRefId> lootNameRefIds;
    // 
    std::string recipeName;
    // 
    int32_t repeat;
  };

  void to_json(nlohmann::json& j, const CraftLootRefTransactionDTO& v) {
    j["lootNameRefIds"] = v.lootNameRefIds;
    j["recipeName"] = v.recipeName;
    j["repeat"] = v.repeat;
  }

  void from_json(const nlohmann::json& j, CraftLootRefTransactionDTO& v) {
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId>>;
    v.recipeName = j.at("recipeName").get<std::string>;
    v.repeat = j.at("repeat").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_CraftLootRefTransactionDTO_HPP
