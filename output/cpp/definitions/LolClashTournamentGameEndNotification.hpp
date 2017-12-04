#ifndef SWAGGER_TYPES_LolClashTournamentGameEndNotification_HPP
#define SWAGGER_TYPES_LolClashTournamentGameEndNotification_HPP
#include <json.hpp>
#include "LolClashRosterNotifyReason.hpp"
#include "Bracket.hpp"
namespace leagueapi {
  // 
  struct LolClashTournamentGameEndNotification {
    // 
    int64_t timestamp;
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    Bracket bracket;
    // 
    int64_t tournamentId;
    // 
    int64_t currentMatchId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentGameEndNotification& v) {
    j["timestamp"] = v.timestamp;
    j["notifyReason"] = v.notifyReason;
    j["bracket"] = v.bracket;
    j["tournamentId"] = v.tournamentId;
    j["currentMatchId"] = v.currentMatchId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentGameEndNotification& v) {
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.bracket = j.at("bracket").get<Bracket>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.currentMatchId = j.at("currentMatchId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentGameEndNotification_HPP
