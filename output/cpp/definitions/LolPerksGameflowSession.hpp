#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksGameflowGameData.hpp"
#include "LolPerksGameflowPhase.hpp"
namespace leagueapi {
  struct LolPerksGameflowSession_t {
    LolPerksGameflowGameData_t gameData;
    LolPerksGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolPerksGameflowGameData_t>();
    v.phase = j.at("phase").get<LolPerksGameflowPhase_t>();
  }
  inline std::string to_string(const LolPerksGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
