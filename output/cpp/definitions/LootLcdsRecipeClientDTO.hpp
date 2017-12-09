#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsRecipeOutputDTO.hpp"
#include "LootLcdsRecipeMetadata.hpp"
#include "LootLcdsRecipeSlotClientDTO.hpp"
namespace leagueapi {
  struct LootLcdsRecipeClientDTO_t {
    std::vector<LootLcdsRecipeOutputDTO_t> outputs;
    std::string displayCategories;
    std::vector<LootLcdsRecipeSlotClientDTO_t> slots;
    std::string crafterName;
    std::string type;
    LootLcdsRecipeMetadata_t metadata;
    std::string recipeName;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeClientDTO_t& v) {
    j["outputs"] = v.outputs;
    j["displayCategories"] = v.displayCategories;
    j["slots"] = v.slots;
    j["crafterName"] = v.crafterName;
    j["type"] = v.type;
    j["metadata"] = v.metadata;
    j["recipeName"] = v.recipeName;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeClientDTO_t& v) {
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO_t>>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO_t>>();
    v.crafterName = j.at("crafterName").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata_t>();
    v.recipeName = j.at("recipeName").get<std::string>();
  }
  inline std::string to_string(const LootLcdsRecipeClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
