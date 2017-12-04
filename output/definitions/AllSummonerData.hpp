#ifndef SWAGGER_TYPES_AllSummonerData_HPP
#define SWAGGER_TYPES_AllSummonerData_HPP
#include <json.hpp>
#include "SummonerLevelAndPoints.hpp"
#include "PrivateSummonerDTO.hpp"
#include "SummonerLevel.hpp"
namespace leagueapi {
  // 
  struct AllSummonerData {
    // 
    PrivateSummonerDTO summoner;
    // 
    SummonerLevel summonerLevel;
    // 
    SummonerLevelAndPoints summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const AllSummonerData& v) {
    j["summoner"] = v.summoner;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, AllSummonerData& v) {
    v.summoner = j.at("summoner").get<PrivateSummonerDTO>;
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel>;
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>;
  }

}
#endif // SWAGGER_TYPES_AllSummonerData_HPP
