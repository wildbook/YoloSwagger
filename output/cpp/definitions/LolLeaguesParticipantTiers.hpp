#ifndef SWAGGER_TYPES_LolLeaguesParticipantTiers_HPP
#define SWAGGER_TYPES_LolLeaguesParticipantTiers_HPP
#include <json.hpp>
#include "LolLeaguesAchievedTier.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesParticipantTiers {
    // 
    uint64_t summonerId;
    // 
    std::vector<LolLeaguesAchievedTier> achievedTiers;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesParticipantTiers& v) {
    j["summonerId"] = v.summonerId;
    j["achievedTiers"] = v.achievedTiers;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesParticipantTiers& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier>>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesParticipantTiers_HPP
