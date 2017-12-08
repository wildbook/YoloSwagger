#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsGameflowPhase.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsGameflowSession_t {
    LolEsportStreamNotificationsGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsGameflowSession_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolEsportStreamNotificationsGameflowPhase_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
