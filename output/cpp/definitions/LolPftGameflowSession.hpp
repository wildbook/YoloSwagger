#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftGameflowPhase.hpp"
#include "LolPftGameflowGameDodge.hpp"
namespace leagueapi {
  struct LolPftGameflowSession_t {
    LolPftGameflowPhase_t phase;
    LolPftGameflowGameDodge_t gameDodge;
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameDodge"] = v.gameDodge;
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolPftGameflowPhase_t>();
    v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge_t>();
  }
  inline std::string to_string(const LolPftGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
