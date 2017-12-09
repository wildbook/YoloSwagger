#pragma once
#include <json.hpp>
#include <optional>
#include "PrivateSummonerDTO.hpp"
#include "SummonerLevel.hpp"
#include "SummonerLevelAndPoints.hpp"
namespace leagueapi {
  struct AllSummonerData_t {
    PrivateSummonerDTO_t summoner;
    SummonerLevelAndPoints_t summonerLevelAndPoints;
    SummonerLevel_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const AllSummonerData_t& v) {
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, AllSummonerData_t& v) {
    v.summoner = j.at("summoner").get<PrivateSummonerDTO_t>();
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
  }
  inline std::string to_string(const AllSummonerData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
