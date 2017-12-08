#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterNotifyReason.hpp"
#include "Bracket.hpp"
namespace leagueapi {
  struct LolClashTournamentGameEndNotification_t {
    int64_t timestamp;
    int64_t currentMatchId;
    int64_t tournamentId;
    Bracket_t bracket;
    LolClashRosterNotifyReason_t notifyReason;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentGameEndNotification_t& v) {
    j["timestamp"] = v.timestamp;
    j["currentMatchId"] = v.currentMatchId;
    j["tournamentId"] = v.tournamentId;
    j["bracket"] = v.bracket;
    j["notifyReason"] = v.notifyReason;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentGameEndNotification_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.currentMatchId = j.at("currentMatchId").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.bracket = j.at("bracket").get<Bracket_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
  }
  inline std::string to_string(const LolClashTournamentGameEndNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
