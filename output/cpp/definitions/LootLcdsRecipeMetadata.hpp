#pragma once
#include <json.hpp>
#include <optional>
#include "LootLcdsLootDescriptionDTO.hpp"
namespace leagueapi {
  struct LootLcdsRecipeMetadata_t {
    bool_t tooltipsDisabled;
    std::vector<LootLcdsLootDescriptionDTO_t> bonusDescriptions;
    std::vector<LootLcdsLootDescriptionDTO_t> guaranteedDescriptions;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeMetadata_t& v) {
    j["tooltipsDisabled"] = v.tooltipsDisabled;
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeMetadata_t& v) {
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool_t>();
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LootLcdsLootDescriptionDTO_t>>();
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LootLcdsLootDescriptionDTO_t>>();
  }
  inline std::string to_string(const LootLcdsRecipeMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
