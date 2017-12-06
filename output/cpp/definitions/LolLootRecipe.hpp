#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootRecipeMetadata.hpp"
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeOutput.hpp"
namespace leagueapi {
  struct LolLootRecipe_t {
    std::string crafterName;
    std::string displayCategories;
    LolLootRecipeMetadata_t metadata;
    std::vector<LolLootRecipeOutput_t> outputs;
    std::string recipeName;
    std::vector<LolLootRecipeSlot_t> slots;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipe_t& v) {
    j["crafterName"] = v.crafterName;
    j["displayCategories"] = v.displayCategories;
    j["metadata"] = v.metadata;
    j["outputs"] = v.outputs;
    j["recipeName"] = v.recipeName;
    j["slots"] = v.slots;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipe_t& v) {
    v.crafterName = j.at("crafterName").get<std::string>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata_t>();
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput_t>>();
    v.recipeName = j.at("recipeName").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot_t>>();
    v.type = j.at("type").get<std::string>();
  }
}
