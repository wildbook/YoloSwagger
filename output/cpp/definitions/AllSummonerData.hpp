#pragma once
#include <json.hpp>
#include <optional>
#include "SummonerLevel.hpp"
#include "SummonerLevelAndPoints.hpp"
#include "PrivateSummonerDTO.hpp"
namespace leagueapi {
  struct AllSummonerData_t {
    PrivateSummonerDTO_t summoner;
    SummonerLevel_t summonerLevel;
    SummonerLevelAndPoints_t summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const AllSummonerData_t& v) {
    j["summoner"] = v.summoner;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, AllSummonerData_t& v) {
    v.summoner = j.at("summoner").get<PrivateSummonerDTO_t>();
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
  }
}
