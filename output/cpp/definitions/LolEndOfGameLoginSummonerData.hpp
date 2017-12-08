#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameLoginSummonerLevelAndPoints.hpp"
namespace leagueapi {
  struct LolEndOfGameLoginSummonerData_t {
    LolEndOfGameLoginSummonerLevelAndPoints_t summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginSummonerData_t& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginSummonerData_t& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolEndOfGameLoginSummonerLevelAndPoints_t>();
  }
  inline std::string to_string(const LolEndOfGameLoginSummonerData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
