#pragma once
#include <json.hpp>
#include <optional>
#include "LootNameRefId.hpp"
namespace leagueapi {
  struct CraftLootRefTransactionDTO_t {
    std::vector<LootNameRefId_t> lootNameRefIds;
    int32_t repeat;
    std::string recipeName;
  };

  inline void to_json(nlohmann::json& j, const CraftLootRefTransactionDTO_t& v) {
    j["lootNameRefIds"] = v.lootNameRefIds;
    j["repeat"] = v.repeat;
    j["recipeName"] = v.recipeName;
  }

  inline void from_json(const nlohmann::json& j, CraftLootRefTransactionDTO_t& v) {
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId_t>>();
    v.repeat = j.at("repeat").get<int32_t>();
    v.recipeName = j.at("recipeName").get<std::string>();
  }
  inline std::string to_string(const CraftLootRefTransactionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
