#ifndef SWAGGER_TYPES_RosterMemberDTO_HPP
#define SWAGGER_TYPES_RosterMemberDTO_HPP
#include <json.hpp>
#include "Position.hpp"
namespace test {
  // 
  struct RosterMemberDTO {
'    // 
    int32_t currentBid;
    // 
    int64_t joinTime;
    // 
    uint64_t playerId;
    // 
    Position position;
    // 
    int64_t rosterId;
    // 
    int64_t tournamentId;
  };

  void to_json(nlohmann::json& j, const RosterMemberDTO& v) {
    j["currentBid"] = v.currentBid;
    j["joinTime"] = v.joinTime;
    j["playerId"] = v.playerId;
    j["position"] = v.position;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
  }

  void from_json(const nlohmann::json& j, RosterMemberDTO& v) {
    v.currentBid = j.at("currentBid").get<int32_t>;
    v.joinTime = j.at("joinTime").get<int64_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.position = j.at("position").get<Position>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_RosterMemberDTO_HPP
