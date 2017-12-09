#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDTO.hpp"
namespace leagueapi {
  struct LolClashRegisteredRosterNotification_t {
    RosterDTO_t roster;
    LolClashRosterNotifyReason_t notifyReason;
  };

  inline void to_json(nlohmann::json& j, const LolClashRegisteredRosterNotification_t& v) {
    j["roster"] = v.roster;
    j["notifyReason"] = v.notifyReason;
  }

  inline void from_json(const nlohmann::json& j, LolClashRegisteredRosterNotification_t& v) {
    v.roster = j.at("roster").get<RosterDTO_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
  }
  inline std::string to_string(const LolClashRegisteredRosterNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
