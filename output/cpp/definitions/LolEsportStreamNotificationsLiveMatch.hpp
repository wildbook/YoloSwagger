#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatch_t {
    std::string title;
    std::string id;
    std::string streamGroup;
    std::string tournamentDescription;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam_t> teams;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatch_t& v) {
    j["title"] = v.title;
    j["id"] = v.id;
    j["streamGroup"] = v.streamGroup;
    j["tournamentDescription"] = v.tournamentDescription;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatch_t& v) {
    v.title = j.at("title").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.streamGroup = j.at("streamGroup").get<std::string>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam_t>>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsLiveMatch_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
