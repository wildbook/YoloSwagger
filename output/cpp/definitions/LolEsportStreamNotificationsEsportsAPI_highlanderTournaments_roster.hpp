#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster_t {
    std::string_t roster;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster_t& v) {
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster_t& v) {
    v.roster = j.at("roster").get<std::string_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
