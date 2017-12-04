#ifndef SWAGGER_TYPES_LolStoreAllSummonerData_HPP
#define SWAGGER_TYPES_LolStoreAllSummonerData_HPP
#include <json.hpp>
#include "LolStoreSummonerLevelAndPoints.hpp"
#include "LolStoreSummoner.hpp"
namespace test {
  // 
  struct LolStoreAllSummonerData {
'    // 
    LolStoreSummoner summoner;
    // 
    LolStoreSummonerLevelAndPoints summonerLevelAndPoints;
  };

  void to_json(nlohmann::json& j, const LolStoreAllSummonerData& v) {
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  void from_json(const nlohmann::json& j, LolStoreAllSummonerData& v) {
    v.summoner = j.at("summoner").get<LolStoreSummoner>;
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolStoreSummonerLevelAndPoints>;
  }

}
#endif // SWAGGER_TYPES_LolStoreAllSummonerData_HPP
