#ifndef SWAGGER_TYPES_LolLeaguesAchievedTier_HPP
#define SWAGGER_TYPES_LolLeaguesAchievedTier_HPP
#include <json.hpp>
#include "LolLeaguesLeagueTier.hpp"
#include "LolLeaguesLeagueQueueType.hpp"
namespace test {
  // 
  struct LolLeaguesAchievedTier {
'    // 
    uint64_t division;
    // 
    LolLeaguesLeagueQueueType queueType;
    // 
    LolLeaguesLeagueTier tier;
  };

  void to_json(nlohmann::json& j, const LolLeaguesAchievedTier& v) {
    j["division"] = v.division;
    j["queueType"] = v.queueType;
    j["tier"] = v.tier;
  }

  void from_json(const nlohmann::json& j, LolLeaguesAchievedTier& v) {
    v.division = j.at("division").get<uint64_t>;
    v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>;
    v.tier = j.at("tier").get<LolLeaguesLeagueTier>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesAchievedTier_HPP
