#pragma once
#include <json.hpp>
#include <optional>
#include "LootNameRefId.hpp"
namespace leagueapi {
  struct CraftLootRefTransactionDTO_t {
    int32_t repeat;
    std::vector<LootNameRefId_t> lootNameRefIds;
    std::string recipeName;
  };

  inline void to_json(nlohmann::json& j, const CraftLootRefTransactionDTO_t& v) {
    j["repeat"] = v.repeat;
    j["lootNameRefIds"] = v.lootNameRefIds;
    j["recipeName"] = v.recipeName;
  }

  inline void from_json(const nlohmann::json& j, CraftLootRefTransactionDTO_t& v) {
    v.repeat = j.at("repeat").get<int32_t>();
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId_t>>();
    v.recipeName = j.at("recipeName").get<std::string>();
  }
  inline std::string to_string(const CraftLootRefTransactionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
