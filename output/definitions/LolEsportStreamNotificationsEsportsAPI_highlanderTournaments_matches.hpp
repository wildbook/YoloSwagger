#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster.hpp"
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches {
    // 
    std::string id;
    // 
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster> input;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches& v) {
    j["id"] = v.id;
    j["input"] = v.input;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches& v) {
    v.id = j.at("id").get<std::string>;
    v.input = j.at("input").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster>>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches_HPP
