#ifndef SWAGGER_TYPES_LootLcdsRecipeClientDTO_HPP
#define SWAGGER_TYPES_LootLcdsRecipeClientDTO_HPP
#include <json.hpp>
#include "LootLcdsRecipeMetadata.hpp"
#include "LootLcdsRecipeSlotClientDTO.hpp"
#include "LootLcdsRecipeOutputDTO.hpp"
namespace leagueapi {
  // 
  struct LootLcdsRecipeClientDTO {
    // 
    std::vector<LootLcdsRecipeOutputDTO> outputs;
    // 
    std::string recipeName;
    // 
    std::string crafterName;
    // 
    std::vector<LootLcdsRecipeSlotClientDTO> slots;
    // 
    std::string displayCategories;
    // 
    std::string type;
    // 
    LootLcdsRecipeMetadata metadata;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeClientDTO& v) {
    j["outputs"] = v.outputs;
    j["recipeName"] = v.recipeName;
    j["crafterName"] = v.crafterName;
    j["slots"] = v.slots;
    j["displayCategories"] = v.displayCategories;
    j["type"] = v.type;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeClientDTO& v) {
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO>>;
    v.recipeName = j.at("recipeName").get<std::string>;
    v.crafterName = j.at("crafterName").get<std::string>;
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO>>;
    v.displayCategories = j.at("displayCategories").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeClientDTO_HPP
