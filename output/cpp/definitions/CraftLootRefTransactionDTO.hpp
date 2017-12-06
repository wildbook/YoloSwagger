#pragma once
#include <json.hpp>
#include <optional>
#include "LootNameRefId.hpp"
namespace leagueapi {
  struct CraftLootRefTransactionDTO_t {
    std::vector<LootNameRefId_t> lootNameRefIds;
    std::string recipeName;
    int32_t repeat;
  };

  inline void to_json(nlohmann::json& j, const CraftLootRefTransactionDTO_t& v) {
    j["lootNameRefIds"] = v.lootNameRefIds;
    j["recipeName"] = v.recipeName;
    j["repeat"] = v.repeat;
  }

  inline void from_json(const nlohmann::json& j, CraftLootRefTransactionDTO_t& v) {
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId_t>>();
    v.recipeName = j.at("recipeName").get<std::string>();
    v.repeat = j.at("repeat").get<int32_t>();
  }
}
