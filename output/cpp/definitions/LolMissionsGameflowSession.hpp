#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsGameflowPhase.hpp"
namespace leagueapi {
  struct LolMissionsGameflowSession_t {
    LolMissionsGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsGameflowSession_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolMissionsGameflowPhase_t>();
  }
}
