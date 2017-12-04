#ifndef SWAGGER_TYPES_LolLootRecipe_HPP
#define SWAGGER_TYPES_LolLootRecipe_HPP
#include <json.hpp>
#include "LolLootRecipeOutput.hpp"
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeMetadata.hpp"
namespace leagueapi {
  // 
  struct LolLootRecipe {
    // 
    std::vector<LolLootRecipeOutput> outputs;
    // 
    std::string recipeName;
    // 
    std::string crafterName;
    // 
    std::vector<LolLootRecipeSlot> slots;
    // 
    std::string displayCategories;
    // 
    std::string type;
    // 
    LolLootRecipeMetadata metadata;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipe& v) {
    j["outputs"] = v.outputs;
    j["recipeName"] = v.recipeName;
    j["crafterName"] = v.crafterName;
    j["slots"] = v.slots;
    j["displayCategories"] = v.displayCategories;
    j["type"] = v.type;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipe& v) {
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput>>;
    v.recipeName = j.at("recipeName").get<std::string>;
    v.crafterName = j.at("crafterName").get<std::string>;
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot>>;
    v.displayCategories = j.at("displayCategories").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata>;
  }

}
#endif // SWAGGER_TYPES_LolLootRecipe_HPP
