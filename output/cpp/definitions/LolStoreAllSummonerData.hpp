#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreSummoner.hpp"
#include "LolStoreSummonerLevelAndPoints.hpp"
namespace leagueapi {
  struct LolStoreAllSummonerData_t {
    LolStoreSummoner_t summoner;
    LolStoreSummonerLevelAndPoints_t summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const LolStoreAllSummonerData_t& v) {
    j["summoner"] = v.summoner;
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, LolStoreAllSummonerData_t& v) {
    v.summoner = j.at("summoner").get<LolStoreSummoner_t>();
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolStoreSummonerLevelAndPoints_t>();
  }
}
