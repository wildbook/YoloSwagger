#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments.hpp"
#include "LolEsportStreamNotificationsESportsAPI_streamgroups.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_teams.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_root_t {
    std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups_t> streamgroups;
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t> highlanderTournaments;
    std::vector<LolEsportStreamNotificationsEsportsAPI_teams_t> teams;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_root_t& v) {
    j["streamgroups"] = v.streamgroups;
    j["highlanderTournaments"] = v.highlanderTournaments;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_root_t& v) {
    v.streamgroups = j.at("streamgroups").get<std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups_t>>();
    v.highlanderTournaments = j.at("highlanderTournaments").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t>>();
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsEsportsAPI_teams_t>>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsAPI_streamgroups_root_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
