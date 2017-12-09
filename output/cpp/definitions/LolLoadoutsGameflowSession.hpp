#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoadoutsGameflowPhase.hpp"
#include "LolLoadoutsGameflowGameData.hpp"
namespace leagueapi {
  struct LolLoadoutsGameflowSession_t {
    LolLoadoutsGameflowGameData_t gameData;
    LolLoadoutsGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolLoadoutsGameflowGameData_t>();
    v.phase = j.at("phase").get<LolLoadoutsGameflowPhase_t>();
  }
  inline std::string to_string(const LolLoadoutsGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
