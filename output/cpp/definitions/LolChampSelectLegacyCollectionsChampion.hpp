#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyCollectionsChampion_t {
    bool freeToPlay;
    int32_t id;
    LolChampSelectLegacyCollectionsOwnership_t ownership;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsChampion_t& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsChampion_t& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.ownership = j.at("ownership").get<LolChampSelectLegacyCollectionsOwnership_t>();
  }
}
