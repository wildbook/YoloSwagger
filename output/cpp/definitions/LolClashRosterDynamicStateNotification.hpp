#pragma once
#include <json.hpp>
#include <optional>
#include "RosterDynamicStateDTO.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashRosterDynamicStateNotification_t {
    LolClashRosterNotifyReason_t notifyReason;
    RosterDynamicStateDTO_t rosterDynamicState;
    uint64_t sourcePlayerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterDynamicStateNotification_t& v) {
    j["notifyReason"] = v.notifyReason;
    j["rosterDynamicState"] = v.rosterDynamicState;
    j["sourcePlayerId"] = v.sourcePlayerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterDynamicStateNotification_t& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO_t>();
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashRosterDynamicStateNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
