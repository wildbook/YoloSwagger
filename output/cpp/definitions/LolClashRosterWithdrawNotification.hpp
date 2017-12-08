#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterWithdraw.hpp"
namespace leagueapi {
  struct LolClashRosterWithdrawNotification_t {
    int64_t rosterId;
    LolClashRosterNotifyReason_t notifyReason;
    RosterWithdraw_t withdraw;
    int64_t tournamentId;
    uint64_t sourcePlayerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterWithdrawNotification_t& v) {
    j["rosterId"] = v.rosterId;
    j["notifyReason"] = v.notifyReason;
    j["withdraw"] = v.withdraw;
    j["tournamentId"] = v.tournamentId;
    j["sourcePlayerId"] = v.sourcePlayerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterWithdrawNotification_t& v) {
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashRosterWithdrawNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
