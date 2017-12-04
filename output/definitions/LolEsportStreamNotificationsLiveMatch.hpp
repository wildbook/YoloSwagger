#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatch_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatch_HPP
#include <json.hpp>
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace test {
  // 
  struct LolEsportStreamNotificationsLiveMatch {
'    // 
    std::string id;
    // 
    std::string streamGroup;
    // 
    std::vector<LolEsportStreamNotificationsLiveMatchTeam> teams;
    // 
    std::string title;
    // 
    std::string tournamentDescription;
  };

  void to_json(nlohmann::json& j, const LolEsportStreamNotificationsLiveMatch& v) {
    j["id"] = v.id;
    j["streamGroup"] = v.streamGroup;
    j["teams"] = v.teams;
    j["title"] = v.title;
    j["tournamentDescription"] = v.tournamentDescription;
  }

  void from_json(const nlohmann::json& j, LolEsportStreamNotificationsLiveMatch& v) {
    v.id = j.at("id").get<std::string>;
    v.streamGroup = j.at("streamGroup").get<std::string>;
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam>>;
    v.title = j.at("title").get<std::string>;
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsLiveMatch_HPP
