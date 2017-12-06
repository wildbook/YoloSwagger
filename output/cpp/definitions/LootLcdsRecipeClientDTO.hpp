#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsRecipeMetadata.hpp"
#include "LootLcdsRecipeSlotClientDTO.hpp"
#include "LootLcdsRecipeOutputDTO.hpp"
namespace leagueapi {
  struct LootLcdsRecipeClientDTO_t {
    LootLcdsRecipeMetadata_t metadata;
    std::string crafterName;
    std::string type;
    std::vector<LootLcdsRecipeSlotClientDTO_t> slots;
    std::string displayCategories;
    std::vector<LootLcdsRecipeOutputDTO_t> outputs;
    std::string recipeName;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeClientDTO_t& v) {
    j["metadata"] = v.metadata;
    j["crafterName"] = v.crafterName;
    j["type"] = v.type;
    j["slots"] = v.slots;
    j["displayCategories"] = v.displayCategories;
    j["outputs"] = v.outputs;
    j["recipeName"] = v.recipeName;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeClientDTO_t& v) {
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata_t>();
    v.crafterName = j.at("crafterName").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO_t>>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO_t>>();
    v.recipeName = j.at("recipeName").get<std::string>();
  }
}
