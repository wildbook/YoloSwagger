#ifndef SWAGGER_TYPES_RosterMemberDTO_HPP
#define SWAGGER_TYPES_RosterMemberDTO_HPP
#include <json.hpp>
#include "Position.hpp"
namespace leagueapi {
  // 
  struct RosterMemberDTO {
    // 
    uint64_t playerId;
    // 
    int64_t rosterId;
    // 
    int64_t tournamentId;
    // 
    Position position;
    // 
    int32_t currentBid;
    // 
    int64_t joinTime;
  };

  inline void to_json(nlohmann::json& j, const RosterMemberDTO& v) {
    j["playerId"] = v.playerId;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
    j["position"] = v.position;
    j["currentBid"] = v.currentBid;
    j["joinTime"] = v.joinTime;
  }

  inline void from_json(const nlohmann::json& j, RosterMemberDTO& v) {
    v.playerId = j.at("playerId").get<uint64_t>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.position = j.at("position").get<Position>;
    v.currentBid = j.at("currentBid").get<int32_t>;
    v.joinTime = j.at("joinTime").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_RosterMemberDTO_HPP
