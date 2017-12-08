#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t {
    std::string id;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_t> matches;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t& v) {
    j["id"] = v.id;
    j["matches"] = v.matches;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t& v) {
    v.id = j.at("id").get<std::string>();
    v.matches = j.at("matches").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_t>>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
