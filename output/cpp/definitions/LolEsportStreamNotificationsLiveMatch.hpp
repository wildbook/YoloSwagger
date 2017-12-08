#pragma once
#include <json.hpp>
#include <optional>
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatch_t {
    std::string_t tournamentDescription;
    std::string_t streamGroup;
    std::string_t title;
    std::string_t id;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam_t> teams;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatch_t& v) {
    j["tournamentDescription"] = v.tournamentDescription;
    j["streamGroup"] = v.streamGroup;
    j["title"] = v.title;
    j["id"] = v.id;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatch_t& v) {
    v.tournamentDescription = j.at("tournamentDescription").get<std::string_t>();
    v.streamGroup = j.at("streamGroup").get<std::string_t>();
    v.title = j.at("title").get<std::string_t>();
    v.id = j.at("id").get<std::string_t>();
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam_t>>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsLiveMatch_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
