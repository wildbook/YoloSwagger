#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterDTO.hpp"
#include "LolClashNotifyReason.hpp"
namespace leagueapi {
  struct LolClashPendingRosterNotification_t {
    LolClashNotifyReason_t notifyReason;
    PendingRosterDTO_t pendingRoster;
    uint64_t sourcePlayerId;
    uint64_t targetPlayerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPendingRosterNotification_t& v) {
    j["notifyReason"] = v.notifyReason;
    j["pendingRoster"] = v.pendingRoster;
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["targetPlayerId"] = v.targetPlayerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPendingRosterNotification_t& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason_t>();
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO_t>();
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
    v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>();
  }
}
