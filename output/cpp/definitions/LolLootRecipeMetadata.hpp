#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootDescription.hpp"
namespace leagueapi {
  struct LolLootRecipeMetadata_t {
    std::vector<LolLootLootDescription_t> bonusDescriptions;
    std::vector<LolLootLootDescription_t> guaranteedDescriptions;
    bool tooltipsDisabled;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeMetadata_t& v) {
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
    j["tooltipsDisabled"] = v.tooltipsDisabled;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeMetadata_t& v) {
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LolLootLootDescription_t>>();
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LolLootLootDescription_t>>();
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>();
  }
}
