#pragma once
#include <json.hpp>
#include <optional>
#include "Bracket.hpp"
#include "LolClashRosterNotifyReason.hpp"
namespace leagueapi {
  struct LolClashTournamentGameEndNotification_t {
    int64_t tournamentId;
    int64_t timestamp;
    Bracket_t bracket;
    LolClashRosterNotifyReason_t notifyReason;
    int64_t currentMatchId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentGameEndNotification_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["timestamp"] = v.timestamp;
    j["bracket"] = v.bracket;
    j["notifyReason"] = v.notifyReason;
    j["currentMatchId"] = v.currentMatchId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentGameEndNotification_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.bracket = j.at("bracket").get<Bracket_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.currentMatchId = j.at("currentMatchId").get<int64_t>();
  }
  inline std::string to_string(const LolClashTournamentGameEndNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
