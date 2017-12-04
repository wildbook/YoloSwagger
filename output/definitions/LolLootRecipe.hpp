#ifndef SWAGGER_TYPES_LolLootRecipe_HPP
#define SWAGGER_TYPES_LolLootRecipe_HPP
#include <json.hpp>
#include "LolLootRecipeMetadata.hpp"
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeOutput.hpp"
namespace test {
  // 
  struct LolLootRecipe {
'    // 
    std::string crafterName;
    // 
    std::string displayCategories;
    // 
    LolLootRecipeMetadata metadata;
    // 
    std::vector<LolLootRecipeOutput> outputs;
    // 
    std::string recipeName;
    // 
    std::vector<LolLootRecipeSlot> slots;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolLootRecipe& v) {
    j["crafterName"] = v.crafterName;
    j["displayCategories"] = v.displayCategories;
    j["metadata"] = v.metadata;
    j["outputs"] = v.outputs;
    j["recipeName"] = v.recipeName;
    j["slots"] = v.slots;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolLootRecipe& v) {
    v.crafterName = j.at("crafterName").get<std::string>;
    v.displayCategories = j.at("displayCategories").get<std::string>;
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata>;
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput>>;
    v.recipeName = j.at("recipeName").get<std::string>;
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot>>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootRecipe_HPP
