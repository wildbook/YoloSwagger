#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreSummonerLevelAndPoints.hpp"
#include "LolStoreSummoner.hpp"
namespace leagueapi {
  struct LolStoreAllSummonerData_t {
    LolStoreSummonerLevelAndPoints_t summonerLevelAndPoints;
    LolStoreSummoner_t summoner;
  };

  inline void to_json(nlohmann::json& j, const LolStoreAllSummonerData_t& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, LolStoreAllSummonerData_t& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolStoreSummonerLevelAndPoints_t>();
    v.summoner = j.at("summoner").get<LolStoreSummoner_t>();
  }
}
