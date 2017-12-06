#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeOutput_t {
    std::string lootName;
    int32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeOutput_t& v) {
    j["lootName"] = v.lootName;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeOutput_t& v) {
    v.lootName = j.at("lootName").get<std::string>();
    v.quantity = j.at("quantity").get<int32_t>();
  }
}
