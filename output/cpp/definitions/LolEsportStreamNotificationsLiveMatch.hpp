#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatch_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatch_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsLiveMatch {
    // 
    std::string tournamentDescription;
    // 
    std::string streamGroup;
    // 
    std::string title;
    // 
    std::string id;
    // 
    std::vector<LolEsportStreamNotificationsLiveMatchTeam> teams;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatch& v) {
    j["tournamentDescription"] = v.tournamentDescription;
    j["streamGroup"] = v.streamGroup;
    j["title"] = v.title;
    j["id"] = v.id;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatch& v) {
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>;
    v.streamGroup = j.at("streamGroup").get<std::string>;
    v.title = j.at("title").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam>>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatch_HPP
