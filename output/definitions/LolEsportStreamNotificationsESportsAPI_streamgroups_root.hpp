#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_root_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_root_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsEsportsAPI_teams.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments.hpp"
#include "LolEsportStreamNotificationsESportsAPI_streamgroups.hpp"
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_root {
    // 
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments> highlanderTournaments;
    // 
    std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups> streamgroups;
    // 
    std::vector<LolEsportStreamNotificationsEsportsAPI_teams> teams;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_root& v) {
    j["highlanderTournaments"] = v.highlanderTournaments;
    j["streamgroups"] = v.streamgroups;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_root& v) {
    v.highlanderTournaments = j.at("highlanderTournaments").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments>>;
    v.streamgroups = j.at("streamgroups").get<std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups>>;
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsEsportsAPI_teams>>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_root_HPP
