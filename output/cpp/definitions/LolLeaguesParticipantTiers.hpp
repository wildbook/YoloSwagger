#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesAchievedTier.hpp"
namespace leagueapi {
  struct LolLeaguesParticipantTiers_t {
    std::vector<LolLeaguesAchievedTier_t> achievedTiers;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesParticipantTiers_t& v) {
    j["achievedTiers"] = v.achievedTiers;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesParticipantTiers_t& v) {
    v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
