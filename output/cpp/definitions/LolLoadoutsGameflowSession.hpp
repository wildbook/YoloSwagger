#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoadoutsGameflowGameData.hpp"
#include "LolLoadoutsGameflowPhase.hpp"
namespace leagueapi {
  struct LolLoadoutsGameflowSession_t {
    LolLoadoutsGameflowPhase_t phase;
    LolLoadoutsGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolLoadoutsGameflowPhase_t>();
    v.gameData = j.at("gameData").get<LolLoadoutsGameflowGameData_t>();
  }
  inline std::string to_string(const LolLoadoutsGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
