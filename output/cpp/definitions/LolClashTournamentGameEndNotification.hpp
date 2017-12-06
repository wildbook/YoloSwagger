#pragma once
#include <json.hpp>
#include <optional>
#include "Bracket.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashTournamentGameEndNotification_t {
    Bracket_t bracket;
    int64_t currentMatchId;
    LolClashRosterNotifyReason_t notifyReason;
    int64_t timestamp;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentGameEndNotification_t& v) {
    j["bracket"] = v.bracket;
    j["currentMatchId"] = v.currentMatchId;
    j["notifyReason"] = v.notifyReason;
    j["timestamp"] = v.timestamp;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentGameEndNotification_t& v) {
    v.bracket = j.at("bracket").get<Bracket_t>();
    v.currentMatchId = j.at("currentMatchId").get<int64_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
}
