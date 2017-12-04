#ifndef SWAGGER_TYPES_LootLcdsRecipeMetadata_HPP
#define SWAGGER_TYPES_LootLcdsRecipeMetadata_HPP
#include <json.hpp>
#include "LootLcdsLootDescriptionDTO.hpp"
namespace leagueapi {
  // 
  struct LootLcdsRecipeMetadata {
    // 
    bool tooltipsDisabled;
    // 
    std::vector<LootLcdsLootDescriptionDTO> bonusDescriptions;
    // 
    std::vector<LootLcdsLootDescriptionDTO> guaranteedDescriptions;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeMetadata& v) {
    j["tooltipsDisabled"] = v.tooltipsDisabled;
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeMetadata& v) {
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>;
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LootLcdsLootDescriptionDTO>>;
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LootLcdsLootDescriptionDTO>>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeMetadata_HPP
