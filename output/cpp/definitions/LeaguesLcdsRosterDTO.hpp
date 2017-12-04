#ifndef SWAGGER_TYPES_LeaguesLcdsRosterDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsRosterDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsTeamMemberInfoDTO.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsRosterDTO {
    // 
    std::vector<LeaguesLcdsTeamMemberInfoDTO> memberList;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsRosterDTO& v) {
    j["memberList"] = v.memberList;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsRosterDTO& v) {
    v.memberList = j.at("memberList").get<std::vector<LeaguesLcdsTeamMemberInfoDTO>>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsRosterDTO_HPP
