#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootDescription.hpp"
namespace leagueapi {
  struct LolLootRecipeMetadata_t {
    std::vector<LolLootLootDescription_t> bonusDescriptions;
    bool tooltipsDisabled;
    std::vector<LolLootLootDescription_t> guaranteedDescriptions;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeMetadata_t& v) {
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["tooltipsDisabled"] = v.tooltipsDisabled;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeMetadata_t& v) {
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LolLootLootDescription_t>>();
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>();
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LolLootLootDescription_t>>();
  }
  inline std::string to_string(const LolLootRecipeMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
