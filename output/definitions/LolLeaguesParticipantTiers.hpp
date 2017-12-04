#ifndef SWAGGER_TYPES_LolLeaguesParticipantTiers_HPP
#define SWAGGER_TYPES_LolLeaguesParticipantTiers_HPP
#include <json.hpp>
#include "LolLeaguesAchievedTier.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesParticipantTiers {
    // 
    std::vector<LolLeaguesAchievedTier> achievedTiers;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolLeaguesParticipantTiers& v) {
    j["achievedTiers"] = v.achievedTiers;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolLeaguesParticipantTiers& v) {
    v.achievedTiers = j.at("achievedTiers").get<std::vector<LolLeaguesAchievedTier>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesParticipantTiers_HPP
