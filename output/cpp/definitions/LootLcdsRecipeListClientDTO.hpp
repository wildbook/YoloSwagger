#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsRecipeClientDTO.hpp"
namespace leagueapi {
  struct LootLcdsRecipeListClientDTO_t {
    int64_t lastUpdate;
    std::vector<LootLcdsRecipeClientDTO_t> recipes;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeListClientDTO_t& v) {
    j["lastUpdate"] = v.lastUpdate;
    j["recipes"] = v.recipes;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeListClientDTO_t& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t>();
    v.recipes = j.at("recipes").get<std::vector<LootLcdsRecipeClientDTO_t>>();
  }
}
