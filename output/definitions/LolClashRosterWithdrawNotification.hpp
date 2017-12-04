#ifndef SWAGGER_TYPES_LolClashRosterWithdrawNotification_HPP
#define SWAGGER_TYPES_LolClashRosterWithdrawNotification_HPP
#include <json.hpp>
#include "LolClashRosterNotifyReason.hpp"
#include "RosterWithdraw.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterWithdrawNotification {
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    int64_t rosterId;
    // 
    uint64_t sourcePlayerId;
    // 
    int64_t tournamentId;
    // 
    RosterWithdraw withdraw;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterWithdrawNotification& v) {
    j["notifyReason"] = v.notifyReason;
    j["rosterId"] = v.rosterId;
    j["sourcePlayerId"] = v.sourcePlayerId;
    j["tournamentId"] = v.tournamentId;
    j["withdraw"] = v.withdraw;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterWithdrawNotification& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.withdraw = j.at("withdraw").get<RosterWithdraw>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterWithdrawNotification_HPP
