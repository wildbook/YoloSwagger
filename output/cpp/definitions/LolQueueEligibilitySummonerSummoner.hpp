#ifndef SWAGGER_TYPES_LolQueueEligibilitySummonerSummoner_HPP
#define SWAGGER_TYPES_LolQueueEligibilitySummonerSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolQueueEligibilitySummonerSummoner {
    // 
    uint64_t summonerId;
    // 
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilitySummonerSummoner& v) {
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilitySummonerSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilitySummonerSummoner_HPP
