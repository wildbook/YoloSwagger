#pragma once
#include <json.hpp>
#include <optional>
#include "RosterDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashRegisteredRosterNotification_t {
    LolClashRosterNotifyReason_t notifyReason;
    RosterDTO_t roster;
  };

  inline void to_json(nlohmann::json& j, const LolClashRegisteredRosterNotification_t& v) {
    j["notifyReason"] = v.notifyReason;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LolClashRegisteredRosterNotification_t& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.roster = j.at("roster").get<RosterDTO_t>();
  }
  inline std::string to_string(const LolClashRegisteredRosterNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
