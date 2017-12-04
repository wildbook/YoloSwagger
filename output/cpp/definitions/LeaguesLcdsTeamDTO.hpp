#ifndef SWAGGER_TYPES_LeaguesLcdsTeamDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsTeamDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsTeamIdDTO.hpp"
#include "LeaguesLcdsRosterDTO.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsTeamDTO {
    // 
    LeaguesLcdsTeamIdDTO teamId;
    // 
    std::string name;
    // 
    LeaguesLcdsRosterDTO roster;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamDTO& v) {
    j["teamId"] = v.teamId;
    j["name"] = v.name;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamDTO& v) {
    v.teamId = j.at("teamId").get<LeaguesLcdsTeamIdDTO>;
    v.name = j.at("name").get<std::string>;
    v.roster = j.at("roster").get<LeaguesLcdsRosterDTO>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsTeamDTO_HPP
