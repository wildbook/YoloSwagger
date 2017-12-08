#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesGameflowGameData.hpp"
#include "LolLeaguesGameflowPhase.hpp"
namespace leagueapi {
  struct LolLeaguesGameflowSession_t {
    LolLeaguesGameflowPhase_t phase;
    LolLeaguesGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolLeaguesGameflowPhase_t>();
    v.gameData = j.at("gameData").get<LolLeaguesGameflowGameData_t>();
  }
  inline std::string to_string(const LolLeaguesGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
