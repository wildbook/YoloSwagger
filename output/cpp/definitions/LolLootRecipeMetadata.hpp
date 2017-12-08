#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLootDescription.hpp"
namespace leagueapi {
  struct LolLootRecipeMetadata_t {
    bool tooltipsDisabled;
    std::vector<LolLootLootDescription_t> bonusDescriptions;
    std::vector<LolLootLootDescription_t> guaranteedDescriptions;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeMetadata_t& v) {
    j["tooltipsDisabled"] = v.tooltipsDisabled;
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeMetadata_t& v) {
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>();
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LolLootLootDescription_t>>();
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LolLootLootDescription_t>>();
  }
  inline std::string to_string(const LolLootRecipeMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
