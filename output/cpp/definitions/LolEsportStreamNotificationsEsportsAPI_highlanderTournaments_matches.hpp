#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_t {
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster_t> input;
    std::string_t id;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_t& v) {
    j["input"] = v.input;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_t& v) {
    v.input = j.at("input").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster_t>>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
