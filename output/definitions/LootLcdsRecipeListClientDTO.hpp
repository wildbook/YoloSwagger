#ifndef SWAGGER_TYPES_LootLcdsRecipeListClientDTO_HPP
#define SWAGGER_TYPES_LootLcdsRecipeListClientDTO_HPP
#include <json.hpp>
#include "LootLcdsRecipeClientDTO.hpp"
namespace leagueapi {
  // 
  struct LootLcdsRecipeListClientDTO {
    // 
    int64_t lastUpdate;
    // 
    std::vector<LootLcdsRecipeClientDTO> recipes;
  };

  void to_json(nlohmann::json& j, const LootLcdsRecipeListClientDTO& v) {
    j["lastUpdate"] = v.lastUpdate;
    j["recipes"] = v.recipes;
  }

  void from_json(const nlohmann::json& j, LootLcdsRecipeListClientDTO& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t>;
    v.recipes = j.at("recipes").get<std::vector<LootLcdsRecipeClientDTO>>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeListClientDTO_HPP
