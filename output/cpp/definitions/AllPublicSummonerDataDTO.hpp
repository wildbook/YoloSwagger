#ifndef SWAGGER_TYPES_AllPublicSummonerDataDTO_HPP
#define SWAGGER_TYPES_AllPublicSummonerDataDTO_HPP
#include <json.hpp>
#include "BasePublicSummonerDTO.hpp"
#include "SummonerLevelAndPoints.hpp"
#include "SummonerLevel.hpp"
namespace leagueapi {
  // 
  struct AllPublicSummonerDataDTO {
    // 
    BasePublicSummonerDTO summoner;
    // 
    SummonerLevelAndPoints summonerLevelAndPoints;
    // 
    SummonerLevel summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const AllPublicSummonerDataDTO& v) {
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, AllPublicSummonerDataDTO& v) {
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO>;
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>;
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel>;
  }

}
#endif // SWAGGER_TYPES_AllPublicSummonerDataDTO_HPP
