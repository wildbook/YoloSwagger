#ifndef SWAGGER_TYPES_LeaguesLcdsTeamDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsTeamDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsRosterDTO.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsTeamDTO {
    // 
    std::string name;
    // 
    LeaguesLcdsRosterDTO roster;
    // 
    LeaguesLcdsTeamIdDTO teamId;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsTeamDTO& v) {
    j["name"] = v.name;
    j["roster"] = v.roster;
    j["teamId"] = v.teamId;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsTeamDTO& v) {
    v.name = j.at("name").get<std::string>;
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO>;
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsTeamDTO_HPP
