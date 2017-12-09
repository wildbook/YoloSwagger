#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftGameflowPhase.hpp"
#include "LolPftGameflowGameDodge.hpp"
namespace leagueapi {
  struct LolPftGameflowSession_t {
    LolPftGameflowGameDodge_t gameDodge;
    LolPftGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowSession_t& v) {
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowSession_t& v) {
    v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge_t>();
    v.phase = j.at("phase").get<LolPftGameflowPhase_t>();
  }
  inline std::string to_string(const LolPftGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
