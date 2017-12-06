#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterWithdraw.hpp"
namespace leagueapi {
  struct LolClashRosterWithdrawNotification_t {
    LolClashRosterNotifyReason_t notifyReason;
    int64_t rosterId;
    uint64_t sourcePlayerId;
    int64_t tournamentId;
    RosterWithdraw_t withdraw;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterWithdrawNotification_t& v) {
    j["notifyReason"] = v.notifyReason;
    j["rosterId"] = v.rosterId;
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["tournamentId"] = v.tournamentId;
    j["withdraw"] = v.withdraw;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterWithdrawNotification_t& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
  }
}
