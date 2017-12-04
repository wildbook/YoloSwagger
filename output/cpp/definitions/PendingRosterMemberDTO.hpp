#ifndef SWAGGER_TYPES_PendingRosterMemberDTO_HPP
#define SWAGGER_TYPES_PendingRosterMemberDTO_HPP
#include <json.hpp>
#include "Position.hpp"
#include "PendingRosterMemberState.hpp"
namespace leagueapi {
  // 
  struct PendingRosterMemberDTO {
    // 
    uint64_t playerId;
    // 
    int32_t pay;
    // 
    PendingRosterMemberState memberState;
    // 
    Position position;
    // 
    int64_t joinTime;
    // 
    int32_t bet;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberDTO& v) {
    j["playerId"] = v.playerId;
    j["pay"] = v.pay;
    j["memberState"] = v.memberState;
    j["position"] = v.position;
    j["joinTime"] = v.joinTime;
    j["bet"] = v.bet;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberDTO& v) {
    v.playerId = j.at("playerId").get<uint64_t>;
    v.pay = j.at("pay").get<int32_t>;
    v.memberState = j.at("memberState").get<PendingRosterMemberState>;
    v.position = j.at("position").get<Position>;
    v.joinTime = j.at("joinTime").get<int64_t>;
    v.bet = j.at("bet").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_PendingRosterMemberDTO_HPP
