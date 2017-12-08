#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterDynamicStateDTO.hpp"
namespace leagueapi {
  struct LolClashRosterDynamicStateNotification_t {
    uint64_t sourcePlayerId;
    LolClashRosterNotifyReason_t notifyReason;
    RosterDynamicStateDTO_t rosterDynamicState;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterDynamicStateNotification_t& v) {
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["notifyReason"] = v.notifyReason;
    j["rosterDynamicState"] = v.rosterDynamicState;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterDynamicStateNotification_t& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.rosterDynamicState = j.at("rosterDynamicState").get<RosterDynamicStateDTO_t>();
  }
  inline std::string to_string(const LolClashRosterDynamicStateNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
