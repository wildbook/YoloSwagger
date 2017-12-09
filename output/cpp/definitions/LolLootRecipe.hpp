#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootRecipeMetadata.hpp"
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeOutput.hpp"
namespace leagueapi {
  struct LolLootRecipe_t {
    std::string recipeName;
    std::vector<LolLootRecipeOutput_t> outputs;
    LolLootRecipeMetadata_t metadata;
    std::vector<LolLootRecipeSlot_t> slots;
    std::string displayCategories;
    std::string type;
    std::string crafterName;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipe_t& v) {
    j["recipeName"] = v.recipeName;
    j["outputs"] = v.outputs;
    j["metadata"] = v.metadata;
    j["slots"] = v.slots;
    j["displayCategories"] = v.displayCategories;
    j["type"] = v.type;
    j["crafterName"] = v.crafterName;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipe_t& v) {
    v.recipeName = j.at("recipeName").get<std::string>();
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput_t>>();
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata_t>();
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot_t>>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.crafterName = j.at("crafterName").get<std::string>();
  }
  inline std::string to_string(const LolLootRecipe_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
