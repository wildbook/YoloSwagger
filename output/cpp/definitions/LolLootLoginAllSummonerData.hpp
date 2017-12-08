#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLoginSummonerLevelAndPoints.hpp"
namespace leagueapi {
  struct LolLootLoginAllSummonerData_t {
    LolLootLoginSummonerLevelAndPoints_t summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginAllSummonerData_t& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginAllSummonerData_t& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolLootLoginSummonerLevelAndPoints_t>();
  }
  inline std::string to_string(const LolLootLoginAllSummonerData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
