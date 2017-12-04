#ifndef SWAGGER_TYPES_LolLootRecipeMetadata_HPP
#define SWAGGER_TYPES_LolLootRecipeMetadata_HPP
#include <json.hpp>
#include "LolLootLootDescription.hpp"
namespace leagueapi {
  // 
  struct LolLootRecipeMetadata {
    // 
    bool tooltipsDisabled;
    // 
    std::vector<LolLootLootDescription> bonusDescriptions;
    // 
    std::vector<LolLootLootDescription> guaranteedDescriptions;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeMetadata& v) {
    j["tooltipsDisabled"] = v.tooltipsDisabled;
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeMetadata& v) {
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>;
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LolLootLootDescription>>;
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LolLootLootDescription>>;
  }

}
#endif // SWAGGER_TYPES_LolLootRecipeMetadata_HPP
