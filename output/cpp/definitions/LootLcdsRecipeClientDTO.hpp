#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsRecipeOutputDTO.hpp"
#include "LootLcdsRecipeSlotClientDTO.hpp"
#include "LootLcdsRecipeMetadata.hpp"
namespace leagueapi {
  struct LootLcdsRecipeClientDTO_t {
    std::string recipeName;
    std::vector<LootLcdsRecipeOutputDTO_t> outputs;
    LootLcdsRecipeMetadata_t metadata;
    std::vector<LootLcdsRecipeSlotClientDTO_t> slots;
    std::string displayCategories;
    std::string type;
    std::string crafterName;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeClientDTO_t& v) {
    j["recipeName"] = v.recipeName;
    j["outputs"] = v.outputs;
    j["metadata"] = v.metadata;
    j["slots"] = v.slots;
    j["displayCategories"] = v.displayCategories;
    j["type"] = v.type;
    j["crafterName"] = v.crafterName;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeClientDTO_t& v) {
    v.recipeName = j.at("recipeName").get<std::string>();
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO_t>>();
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata_t>();
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO_t>>();
    v.displayCategories = j.at("displayCategories").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.crafterName = j.at("crafterName").get<std::string>();
  }
  inline std::string to_string(const LootLcdsRecipeClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
