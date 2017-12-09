#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsLootDescriptionDTO.hpp"
namespace leagueapi {
  struct LootLcdsRecipeMetadata_t {
    std::vector<LootLcdsLootDescriptionDTO_t> bonusDescriptions;
    bool tooltipsDisabled;
    std::vector<LootLcdsLootDescriptionDTO_t> guaranteedDescriptions;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeMetadata_t& v) {
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["tooltipsDisabled"] = v.tooltipsDisabled;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeMetadata_t& v) {
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LootLcdsLootDescriptionDTO_t>>();
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>();
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LootLcdsLootDescriptionDTO_t>>();
  }
  inline std::string to_string(const LootLcdsRecipeMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
