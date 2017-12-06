#pragma once
#include <json.hpp>
#include <optional>
#include "SummonerLevel.hpp"
#include "SummonerLevelAndPoints.hpp"
#include "BasePublicSummonerDTO.hpp"
namespace leagueapi {
  struct AllPublicSummonerDataDTO_t {
    SummonerLevelAndPoints_t summonerLevelAndPoints;
    SummonerLevel_t summonerLevel;
    BasePublicSummonerDTO_t summoner;
  };

  inline void to_json(nlohmann::json& j, const AllPublicSummonerDataDTO_t& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summonerLevel"] = v.summonerLevel;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, AllPublicSummonerDataDTO_t& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO_t>();
  }
}
