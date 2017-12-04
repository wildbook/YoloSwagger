#ifndef SWAGGER_TYPES_LolClashRosterWithdrawNotification_HPP
#define SWAGGER_TYPES_LolClashRosterWithdrawNotification_HPP
#include <json.hpp>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterWithdraw.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterWithdrawNotification {
    // 
    uint64_t sourcePlayerId;
    // 
    int64_t rosterId;
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    RosterWithdraw withdraw;
    // 
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterWithdrawNotification& v) {
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["rosterId"] = v.rosterId;
    j["notifyReason"] = v.notifyReason;
    j["withdraw"] = v.withdraw;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterWithdrawNotification& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.withdraw = j.at("withdraw").get<RosterWithdraw>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterWithdrawNotification_HPP
