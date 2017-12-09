#pragma once
#include <json.hpp>
#include <optional>
#include "PrivateSummonerDTO.hpp"
#include "SummonerLevelAndPoints.hpp"
#include "SummonerLevel.hpp"
namespace leagueapi {
  struct AllSummonerData_t {
    SummonerLevel_t summonerLevel;
    SummonerLevelAndPoints_t summonerLevelAndPoints;
    PrivateSummonerDTO_t summoner;
  };

  inline void to_json(nlohmann::json& j, const AllSummonerData_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, AllSummonerData_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
    v.summoner = j.at("summoner").get<PrivateSummonerDTO_t>();
  }
  inline std::string to_string(const AllSummonerData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
