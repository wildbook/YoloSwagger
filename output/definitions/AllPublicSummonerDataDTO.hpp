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
    SummonerLevel summonerLevel;
    // 
    SummonerLevelAndPoints summonerLevelAndPoints;
  };

  void to_json(nlohmann::json& j, const AllPublicSummonerDataDTO& v) {
    j["summoner"] = v.summoner;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  void from_json(const nlohmann::json& j, AllPublicSummonerDataDTO& v) {
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO>;
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel>;
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>;
  }

}
#endif // SWAGGER_TYPES_AllPublicSummonerDataDTO_HPP
