#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksGameflowGameData.hpp"
#include "LolPerksGameflowPhase.hpp"
namespace leagueapi {
  struct LolPerksGameflowSession_t {
    LolPerksGameflowPhase_t phase;
    LolPerksGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolPerksGameflowPhase_t>();
    v.gameData = j.at("gameData").get<LolPerksGameflowGameData_t>();
  }
  inline std::string to_string(const LolPerksGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
