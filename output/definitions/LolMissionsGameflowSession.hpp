#ifndef SWAGGER_TYPES_LolMissionsGameflowSession_HPP
#define SWAGGER_TYPES_LolMissionsGameflowSession_HPP
#include <json.hpp>
#include "LolMissionsGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolMissionsGameflowSession {
    // 
    LolMissionsGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsGameflowSession& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsGameflowSession& v) {
    v.phase = j.at("phase").get<LolMissionsGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsGameflowSession_HPP
