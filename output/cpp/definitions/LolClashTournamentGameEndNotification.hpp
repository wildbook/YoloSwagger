#pragma once
#include <json.hpp>
#include <optional>
#include "Bracket.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashTournamentGameEndNotification_t {
    LolClashRosterNotifyReason_t notifyReason;
    int64_t tournamentId;
    Bracket_t bracket;
    int64_t currentMatchId;
    int64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentGameEndNotification_t& v) {
    j["notifyReason"] = v.notifyReason;
    j["tournamentId"] = v.tournamentId;
    j["bracket"] = v.bracket;
    j["currentMatchId"] = v.currentMatchId;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentGameEndNotification_t& v) {
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.bracket = j.at("bracket").get<Bracket_t>();
    v.currentMatchId = j.at("currentMatchId").get<int64_t>();
    v.timestamp = j.at("timestamp").get<int64_t>();
  }
  inline std::string to_string(const LolClashTournamentGameEndNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
