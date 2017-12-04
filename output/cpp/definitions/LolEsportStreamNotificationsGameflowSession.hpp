#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsGameflowSession_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsGameflowSession_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsGameflowSession {
    // 
    LolEsportStreamNotificationsGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsGameflowSession& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsGameflowSession& v) {
    v.phase = j.at("phase").get<LolEsportStreamNotificationsGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsGameflowSession_HPP
