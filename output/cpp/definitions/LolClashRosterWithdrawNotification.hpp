#pragma once
#include <json.hpp>
#include <optional>
#include "RosterWithdraw.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashRosterWithdrawNotification_t {
    uint64_t sourcePlayerId;
    LolClashRosterNotifyReason_t notifyReason;
    RosterWithdraw_t withdraw;
    int64_t rosterId;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterWithdrawNotification_t& v) {
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["notifyReason"] = v.notifyReason;
    j["withdraw"] = v.withdraw;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterWithdrawNotification_t& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
}
