#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatch_t {
    std::string title;
    std::string streamGroup;
    std::string id;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam_t> teams;
    std::string tournamentDescription;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatch_t& v) {
    j["title"] = v.title;
    j["streamGroup"] = v.streamGroup;
    j["id"] = v.id;
    j["teams"] = v.teams;
    j["tournamentDescription"] = v.tournamentDescription;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatch_t& v) {
    v.title = j.at("title").get<std::string>();
    v.streamGroup = j.at("streamGroup").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam_t>>();
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsLiveMatch_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
