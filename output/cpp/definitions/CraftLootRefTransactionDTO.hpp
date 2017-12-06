#pragma once
#include <json.hpp>
#include <optional>
#include "LootNameRefId.hpp"
namespace leagueapi {
  struct CraftLootRefTransactionDTO_t {
    int32_t repeat;
    std::string recipeName;
    std::vector<LootNameRefId_t> lootNameRefIds;
  };

  inline void to_json(nlohmann::json& j, const CraftLootRefTransactionDTO_t& v) {
    j["repeat"] = v.repeat;
    j["recipeName"] = v.recipeName;
    j["lootNameRefIds"] = v.lootNameRefIds;
  }

  inline void from_json(const nlohmann::json& j, CraftLootRefTransactionDTO_t& v) {
    v.repeat = j.at("repeat").get<int32_t>();
    v.recipeName = j.at("recipeName").get<std::string>();
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId_t>>();
  }
}
