#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters {
    // 
    std::string id;
    // 
    std::string name;
    // 
    int64_t team;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["team"] = v.team;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters& v) {
    v.id = j.at("id").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.team = j.at("team").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters_HPP
