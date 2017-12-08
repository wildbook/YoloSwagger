#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsESportsAPI_streamgroups.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_teams.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_root_t {
    std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups_t> streamgroups;
    std::vector<LolEsportStreamNotificationsEsportsAPI_teams_t> teams;
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t> highlanderTournaments;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_root_t& v) {
    j["streamgroups"] = v.streamgroups;
    j["teams"] = v.teams;
    j["highlanderTournaments"] = v.highlanderTournaments;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_root_t& v) {
    v.streamgroups = j.at("streamgroups").get<std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups_t>>();
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsEsportsAPI_teams_t>>();
    v.highlanderTournaments = j.at("highlanderTournaments").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_t>>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsAPI_streamgroups_root_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
