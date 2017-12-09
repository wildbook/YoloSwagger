#pragma once
#include <json.hpp>
#include <optional>
#include "SummonerLevel.hpp"
#include "SummonerLevelAndPoints.hpp"
#include "PrivateSummonerDTO.hpp"
namespace leagueapi {
  struct AllSummonerData_t {
    SummonerLevel_t summonerLevel;
    PrivateSummonerDTO_t summoner;
    SummonerLevelAndPoints_t summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const AllSummonerData_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, AllSummonerData_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<SummonerLevel_t>();
    v.summoner = j.at("summoner").get<PrivateSummonerDTO_t>();
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints_t>();
  }
  inline std::string to_string(const AllSummonerData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
