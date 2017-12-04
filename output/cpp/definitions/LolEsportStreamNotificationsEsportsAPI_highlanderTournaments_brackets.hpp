#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches.hpp"
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets {
    // 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches> matches;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets& v) {
    j["matches"] = v.matches;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets& v) {
    v.matches = j.at("matches").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches>>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_HPP
