#ifndef SWAGGER_TYPES_PlayerRosterHistoryDTO_HPP
#define SWAGGER_TYPES_PlayerRosterHistoryDTO_HPP
#include <json.hpp>
#include "RosterMemberDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerRosterHistoryDTO {
    // 
    std::vector<RosterMemberDTO> rosters;
  };

  void to_json(nlohmann::json& j, const PlayerRosterHistoryDTO& v) {
    j["rosters"] = v.rosters;
  }

  void from_json(const nlohmann::json& j, PlayerRosterHistoryDTO& v) {
    v.rosters = j.at("rosters").get<std::vector<RosterMemberDTO>>;
  }

}
#endif // SWAGGER_TYPES_PlayerRosterHistoryDTO_HPP
