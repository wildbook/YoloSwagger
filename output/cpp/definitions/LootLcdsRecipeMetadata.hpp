#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsLootDescriptionDTO.hpp"
namespace leagueapi {
  struct LootLcdsRecipeMetadata_t {
    std::vector<LootLcdsLootDescriptionDTO_t> bonusDescriptions;
    std::vector<LootLcdsLootDescriptionDTO_t> guaranteedDescriptions;
    bool tooltipsDisabled;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeMetadata_t& v) {
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
    j["tooltipsDisabled"] = v.tooltipsDisabled;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeMetadata_t& v) {
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LootLcdsLootDescriptionDTO_t>>();
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LootLcdsLootDescriptionDTO_t>>();
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>();
  }
}
