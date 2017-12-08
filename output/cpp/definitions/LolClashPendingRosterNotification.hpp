#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterDTO.hpp"
#include "LolClashNotifyReason.hpp"
namespace leagueapi {
  struct LolClashPendingRosterNotification_t {
    PendingRosterDTO_t pendingRoster;
    LolClashNotifyReason_t notifyReason;
    uint64_t targetPlayerId;
    uint64_t sourcePlayerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashPendingRosterNotification_t& v) {
    j["pendingRoster"] = v.pendingRoster;
    j["notifyReason"] = v.notifyReason;
    j["targetPlayerId"] = v.targetPlayerId;
    j["sourcePlayerId"] = v.sourcePlayerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashPendingRosterNotification_t& v) {
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason_t>();
    v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>();
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashPendingRosterNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
