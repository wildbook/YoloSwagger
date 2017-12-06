#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsRecipeMetadata.hpp"
#include "LootLcdsRecipeOutputDTO.hpp"
#include "LootLcdsRecipeSlotClientDTO.hpp"
namespace leagueapi {
  struct LootLcdsRecipeClientDTO_t {
    std::string crafterName;
    std::string displayCategories;
    LootLcdsRecipeMetadata_t metadata;
    std::vector<LootLcdsRecipeOutputDTO_t> outputs;
    std::string recipeName;
    std::vector<LootLcdsRecipeSlotClientDTO_t> slots;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeClientDTO_t& v) {
    j["crafterName"] = v.crafterName;
    j["displayCategories"] = v.displayCategories;
    j["metadata"] = v.metadata;
    j["outputs"] = v.outputs;
    j["recipeName"] = v.recipeName;
    j["slots"] = v.slots;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeClientDTO_t& v) {
    v.crafterName = j.at("crafterName").get<std::string>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata_t>();
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO_t>>();
    v.recipeName = j.at("recipeName").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO_t>>();
    v.type = j.at("type").get<std::string>();
  }
}
