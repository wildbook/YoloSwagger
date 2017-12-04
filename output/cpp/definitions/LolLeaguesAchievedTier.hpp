#ifndef SWAGGER_TYPES_LolLeaguesAchievedTier_HPP
#define SWAGGER_TYPES_LolLeaguesAchievedTier_HPP
#include <json.hpp>
#include "LolLeaguesLeagueQueueType.hpp"
#include "LolLeaguesLeagueTier.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesAchievedTier {
    // 
    LolLeaguesLeagueTier tier;
    // 
    uint64_t division;
    // 
    LolLeaguesLeagueQueueType queueType;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesAchievedTier& v) {
    j["tier"] = v.tier;
    j["division"] = v.division;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesAchievedTier& v) {
    v.tier = j.at("tier").get<LolLeaguesLeagueTier>;
    v.division = j.at("division").get<uint64_t>;
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesAchievedTier_HPP
