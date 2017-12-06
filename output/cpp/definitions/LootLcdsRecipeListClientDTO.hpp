#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsRecipeClientDTO.hpp"
namespace leagueapi {
  struct LootLcdsRecipeListClientDTO_t {
    std::vector<LootLcdsRecipeClientDTO_t> recipes;
    int64_t lastUpdate;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeListClientDTO_t& v) {
    j["recipes"] = v.recipes;
    j["lastUpdate"] = v.lastUpdate;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeListClientDTO_t& v) {
    v.recipes = j.at("recipes").get<std::vector<LootLcdsRecipeClientDTO_t>>();
    v.lastUpdate = j.at("lastUpdate").get<int64_t>();
  }
}
