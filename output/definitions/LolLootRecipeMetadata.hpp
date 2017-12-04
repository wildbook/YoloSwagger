#ifndef SWAGGER_TYPES_LolLootRecipeMetadata_HPP
#define SWAGGER_TYPES_LolLootRecipeMetadata_HPP
#include <json.hpp>
#include "LolLootLootDescription.hpp"
namespace test {
  // 
  struct LolLootRecipeMetadata {
'    // 
    std::vector<LolLootLootDescription> bonusDescriptions;
    // 
    std::vector<LolLootLootDescription> guaranteedDescriptions;
    // 
    bool tooltipsDisabled;
  };

  void to_json(nlohmann::json& j, const LolLootRecipeMetadata& v) {
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
    j["tooltipsDisabled"] = v.tooltipsDisabled;
  }

  void from_json(const nlohmann::json& j, LolLootRecipeMetadata& v) {
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LolLootLootDescription>>;
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LolLootLootDescription>>;
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLootRecipeMetadata_HPP
