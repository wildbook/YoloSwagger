#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterNotifyReason.hpp"
#include "Bracket.hpp"
namespace leagueapi {
  struct LolClashTournamentGameEndNotification_t {
    int64_t_t timestamp;
    LolClashRosterNotifyReason_t notifyReason;
    Bracket_t bracket;
    int64_t_t tournamentId;
    int64_t_t currentMatchId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentGameEndNotification_t& v) {
    j["timestamp"] = v.timestamp;
    j["notifyReason"] = v.notifyReason;
    j["bracket"] = v.bracket;
    j["tournamentId"] = v.tournamentId;
    j["currentMatchId"] = v.currentMatchId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentGameEndNotification_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t_t>();
    v.notifyReason = j.at("notifyReason").get<LolClashRosterNotifyReason_t>();
    v.bracket = j.at("bracket").get<Bracket_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
    v.currentMatchId = j.at("currentMatchId").get<int64_t_t>();
  }
  inline std::string to_string(const LolClashTournamentGameEndNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
