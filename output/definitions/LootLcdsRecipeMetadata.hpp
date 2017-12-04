#ifndef SWAGGER_TYPES_LootLcdsRecipeMetadata_HPP
#define SWAGGER_TYPES_LootLcdsRecipeMetadata_HPP
#include <json.hpp>
#include "LootLcdsLootDescriptionDTO.hpp"
namespace leagueapi {
  // 
  struct LootLcdsRecipeMetadata {
    // 
    std::vector<LootLcdsLootDescriptionDTO> bonusDescriptions;
    // 
    std::vector<LootLcdsLootDescriptionDTO> guaranteedDescriptions;
    // 
    bool tooltipsDisabled;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeMetadata& v) {
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
    j["tooltipsDisabled"] = v.tooltipsDisabled;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeMetadata& v) {
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LootLcdsLootDescriptionDTO>>;
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LootLcdsLootDescriptionDTO>>;
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeMetadata_HPP
