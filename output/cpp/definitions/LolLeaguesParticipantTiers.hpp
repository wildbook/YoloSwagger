#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesAchievedTier.hpp"
namespace leagueapi {
  struct LolLeaguesParticipantTiers_t {
    uint64_t_t summonerId;
    std::vector<LolLeaguesAchievedTier_t> achievedTiers;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesParticipantTiers_t& v) {
    j["summonerId"] = v.summonerId;
    j["achievedTiers"] = v.achievedTiers;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesParticipantTiers_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier_t>>();
  }
  inline std::string to_string(const LolLeaguesParticipantTiers_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
