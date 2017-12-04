#ifndef SWAGGER_TYPES_LootLcdsRecipeClientDTO_HPP
#define SWAGGER_TYPES_LootLcdsRecipeClientDTO_HPP
#include <json.hpp>
#include "LootLcdsRecipeOutputDTO.hpp"
#include "LootLcdsRecipeSlotClientDTO.hpp"
#include "LootLcdsRecipeMetadata.hpp"
namespace leagueapi {
  // 
  struct LootLcdsRecipeClientDTO {
    // 
    std::string crafterName;
    // 
    std::string displayCategories;
    // 
    LootLcdsRecipeMetadata metadata;
    // 
    std::vector<LootLcdsRecipeOutputDTO> outputs;
    // 
    std::string recipeName;
    // 
    std::vector<LootLcdsRecipeSlotClientDTO> slots;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeClientDTO& v) {
    j["crafterName"] = v.crafterName;
    j["displayCategories"] = v.displayCategories;
    j["metadata"] = v.metadata;
    j["outputs"] = v.outputs;
    j["recipeName"] = v.recipeName;
    j["slots"] = v.slots;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeClientDTO& v) {
    v.crafterName = j.at("crafterName").get<std::string>;
    v.displayCategories = j.at("displayCategories").get<std::string>;
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata>;
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO>>;
    v.recipeName = j.at("recipeName").get<std::string>;
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO>>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeClientDTO_HPP
