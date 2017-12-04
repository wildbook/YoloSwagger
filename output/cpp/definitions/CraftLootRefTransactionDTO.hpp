#ifndef SWAGGER_TYPES_CraftLootRefTransactionDTO_HPP
#define SWAGGER_TYPES_CraftLootRefTransactionDTO_HPP
#include <json.hpp>
#include "LootNameRefId.hpp"
namespace leagueapi {
  // 
  struct CraftLootRefTransactionDTO {
    // 
    int32_t repeat;
    // 
    std::string recipeName;
    // 
    std::vector<LootNameRefId> lootNameRefIds;
  };

  inline void to_json(nlohmann::json& j, const CraftLootRefTransactionDTO& v) {
    j["repeat"] = v.repeat;
    j["recipeName"] = v.recipeName;
    j["lootNameRefIds"] = v.lootNameRefIds;
  }

  inline void from_json(const nlohmann::json& j, CraftLootRefTransactionDTO& v) {
    v.repeat = j.at("repeat").get<int32_t>;
    v.recipeName = j.at("recipeName").get<std::string>;
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId>>;
  }

}
#endif // SWAGGER_TYPES_CraftLootRefTransactionDTO_HPP
