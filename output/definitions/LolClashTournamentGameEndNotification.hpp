#ifndef SWAGGER_TYPES_LolClashTournamentGameEndNotification_HPP
#define SWAGGER_TYPES_LolClashTournamentGameEndNotification_HPP
#include <json.hpp>
#include "LolClashRosterNotifyReason.hpp"
#include "Bracket.hpp"
namespace leagueapi {
  // 
  struct LolClashTournamentGameEndNotification {
    // 
    Bracket bracket;
    // 
    int64_t currentMatchId;
    // 
    LolClashRosterNotifyReason notifyReason;
    // 
    int64_t timestamp;
    // 
    int64_t tournamentId;
  };

  void to_json(nlohmann::json& j, const LolClashTournamentGameEndNotification& v) {
    j["bracket"] = v.bracket;
    j["currentMatchId"] = v.currentMatchId;
    j["notifyReason"] = v.notifyReason;
    j["timestamp"] = v.timestamp;
    j["tournamentId"] = v.tournamentId;
  }

  void from_json(const nlohmann::json& j, LolClashTournamentGameEndNotification& v) {
    v.bracket = j.at("bracket").get<Bracket>;
    v.currentMatchId = j.at("currentMatchId").get<int64_t>;
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason>;
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentGameEndNotification_HPP
