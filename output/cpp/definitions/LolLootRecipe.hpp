#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootRecipeOutput.hpp"
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeMetadata.hpp"
namespace leagueapi {
  struct LolLootRecipe_t {
    std::vector<LolLootRecipeOutput_t> outputs;
    std::string_t recipeName;
    std::string_t crafterName;
    std::vector<LolLootRecipeSlot_t> slots;
    std::string_t displayCategories;
    std::string_t type;
    LolLootRecipeMetadata_t metadata;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipe_t& v) {
    j["outputs"] = v.outputs;
    j["recipeName"] = v.recipeName;
    j["crafterName"] = v.crafterName;
    j["slots"] = v.slots;
    j["displayCategories"] = v.displayCategories;
    j["type"] = v.type;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipe_t& v) {
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput_t>>();
    v.recipeName = j.at("recipeName").get<std::string_t>();
    v.crafterName = j.at("crafterName").get<std::string_t>();
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot_t>>();
    v.displayCategories = j.at("displayCategories").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata_t>();
  }
  inline std::string to_string(const LolLootRecipe_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
