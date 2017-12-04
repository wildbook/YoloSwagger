#ifndef SWAGGER_TYPES_LolLeaguesLeagueTeam_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueTeam_HPP
#include <json.hpp>
#include "LolLeaguesLeagueTeamMember.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeagueTeam {
    // 
    std::string id;
    // 
    std::vector<LolLeaguesLeagueTeamMember> members;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeagueTeam& v) {
    j["id"] = v.id;
    j["members"] = v.members;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeagueTeam& v) {
    v.id = j.at("id").get<std::string>;
    v.members = j.at("members").get<std::vector<LolLeaguesLeagueTeamMember>>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueTeam_HPP
