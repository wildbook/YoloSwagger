#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootRecipeOutput.hpp"
#include "LolLootRecipeMetadata.hpp"
#include "LolLootRecipeSlot.hpp"
namespace leagueapi {
  struct LolLootRecipe_t {
    LolLootRecipeMetadata_t metadata;
    std::vector<LolLootRecipeOutput_t> outputs;
    std::string type;
    std::vector<LolLootRecipeSlot_t> slots;
    std::string displayCategories;
    std::string recipeName;
    std::string crafterName;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipe_t& v) {
    j["metadata"] = v.metadata;
    j["outputs"] = v.outputs;
    j["type"] = v.type;
    j["slots"] = v.slots;
    j["displayCategories"] = v.displayCategories;
    j["recipeName"] = v.recipeName;
    j["crafterName"] = v.crafterName;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipe_t& v) {
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata_t>();
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput_t>>();
    v.type = j.at("type").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot_t>>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.recipeName = j.at("recipeName").get<std::string>();
    v.crafterName = j.at("crafterName").get<std::string>();
  }
  inline std::string to_string(const LolLootRecipe_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
