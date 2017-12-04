#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches.hpp"
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets {
    // 
    std::string id;
    // 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches> matches;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets& v) {
    j["id"] = v.id;
    j["matches"] = v.matches;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets& v) {
    v.id = j.at("id").get<std::string>;
    v.matches = j.at("matches").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches>>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets_HPP
