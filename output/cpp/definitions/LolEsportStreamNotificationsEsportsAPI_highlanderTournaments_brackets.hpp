#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t {
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_t> matches;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t& v) {
    j["matches"] = v.matches;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t& v) {
    v.matches = j.at("matches").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_t>>();
    v.id = j.at("id").get<std::string>();
  }
}
