#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyCollectionsChampion_t {
    LolChampSelectLegacyCollectionsOwnership_t ownership;
    int32_t id;
    bool freeToPlay;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsChampion_t& v) {
    j["ownership"] = v.ownership;
    j["id"] = v.id;
    j["freeToPlay"] = v.freeToPlay;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsChampion_t& v) {
    v.ownership = j.at("ownership").get<LolChampSelectLegacyCollectionsOwnership_t>();
    v.id = j.at("id").get<int32_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
