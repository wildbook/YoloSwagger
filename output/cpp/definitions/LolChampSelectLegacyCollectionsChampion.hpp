#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyCollectionsChampion_t {
    LolChampSelectLegacyCollectionsOwnership_t ownership;
    bool freeToPlay;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsChampion_t& v) {
    j["ownership"] = v.ownership;
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsChampion_t& v) {
    v.ownership = j.at("ownership").get<LolChampSelectLegacyCollectionsOwnership_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.id = j.at("id").get<int32_t>();
  }
}
