#ifndef SWAGGER_TYPES_LeaguesLcdsTeamMemberInfoDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsTeamMemberInfoDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LeaguesLcdsTeamMemberInfoDTO {
    // 
    uint64_t playerId;
    // 
    std::string playerName;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamMemberInfoDTO& v) {
    j["playerId"] = v.playerId;
    j["playerName"] = v.playerName;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamMemberInfoDTO& v) {
    v.playerId = j.at("playerId").get<uint64_t>;
    v.playerName = j.at("playerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsTeamMemberInfoDTO_HPP
