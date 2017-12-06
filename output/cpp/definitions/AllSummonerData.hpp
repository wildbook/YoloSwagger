#pragma once
#include <json.hpp>
#include <optional>
#include "SummonerLevel.hpp"
#include "PrivateSummonerDTO.hpp"
#include "SummonerLevelAndPoints.hpp"
namespace leagueapi {
  struct AllSummonerData_t {
    SummonerLevelAndPoints_t summonerLevelAndPoints;
    SummonerLevel_t summonerLevel;
    PrivateSummonerDTO_t summoner;
  };

  inline void to_json(nlohmann::json& j, const AllSummonerData_t& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summonerLevel"] = v.summonerLevel;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, AllSummonerData_t& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
    v.summoner = j.at("summoner").get<PrivateSummonerDTO_t>();
  }
}
