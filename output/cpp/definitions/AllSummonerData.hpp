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
    SummonerLevelAndPoints summonerLevelAndPoints;
    // 
    SummonerLevel summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const AllSummonerData& v) {
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, AllSummonerData& v) {
    v.summoner = j.at("summoner").get<PrivateSummonerDTO>;
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>;
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel>;
  }

}
#endif // SWAGGER_TYPES_AllSummonerData_HPP
