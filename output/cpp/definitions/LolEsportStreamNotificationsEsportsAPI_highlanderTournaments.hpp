#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets.hpp"
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments {
    // 
    std::string id;
    // 
    std::string title;
    // 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters> rosters;
    // 
    std::string description;
    // 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets> brackets;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) {
    j["id"] = v.id;
    j["title"] = v.title;
    j["rosters"] = v.rosters;
    j["description"] = v.description;
    j["brackets"] = v.brackets;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) {
    v.id = j.at("id").get<std::string>;
    v.title = j.at("title").get<std::string>;
    v.rosters = j.at("rosters").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters>>;
    v.description = j.at("description").get<std::string>;
    v.brackets = j.at("brackets").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets>>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_HPP
