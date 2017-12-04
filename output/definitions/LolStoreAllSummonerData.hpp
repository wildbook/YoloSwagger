#ifndef SWAGGER_TYPES_LolStoreAllSummonerData_HPP
#define SWAGGER_TYPES_LolStoreAllSummonerData_HPP
#include <json.hpp>
#include "LolStoreSummoner.hpp"
#include "LolStoreSummonerLevelAndPoints.hpp"
namespace leagueapi {
  // 
  struct LolStoreAllSummonerData {
    // 
    LolStoreSummoner summoner;
    // 
    LolStoreSummonerLevelAndPoints summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const LolStoreAllSummonerData& v) {
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, LolStoreAllSummonerData& v) {
    v.summoner = j.at("summoner").get<LolStoreSummoner>;
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolStoreSummonerLevelAndPoints>;
  }

}
#endif // SWAGGER_TYPES_LolStoreAllSummonerData_HPP
