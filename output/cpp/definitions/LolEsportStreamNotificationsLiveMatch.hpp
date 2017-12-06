#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatch_t {
    std::string id;
    std::string streamGroup;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam_t> teams;
    std::string title;
    std::string tournamentDescription;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatch_t& v) {
    j["id"] = v.id;
    j["streamGroup"] = v.streamGroup;
    j["teams"] = v.teams;
    j["title"] = v.title;
    j["tournamentDescription"] = v.tournamentDescription;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatch_t& v) {
    v.id = j.at("id").get<std::string>();
    v.streamGroup = j.at("streamGroup").get<std::string>();
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam_t>>();
    v.title = j.at("title").get<std::string>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
  }
}
