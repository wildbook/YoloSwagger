#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters.hpp"
namespace test {
  // 
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments {
'    // 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets> brackets;
    // 
    std::string description;
    // 
    std::string id;
    // 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters> rosters;
    // 
    std::string title;
  };

  void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) {
    j["brackets"] = v.brackets;
    j["description"] = v.description;
    j["id"] = v.id;
    j["rosters"] = v.rosters;
    j["title"] = v.title;
  }

  void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) {
    v.brackets = j.at("brackets").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets>>;
    v.description = j.at("description").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.rosters = j.at("rosters").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters>>;
    v.title = j.at("title").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_HPP
