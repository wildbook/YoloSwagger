#ifndef SWAGGER_TYPES_PendingRosterMemberDTO_HPP
#define SWAGGER_TYPES_PendingRosterMemberDTO_HPP
#include <json.hpp>
#include "PendingRosterMemberState.hpp"
#include "Position.hpp"
namespace leagueapi {
  // 
  struct PendingRosterMemberDTO {
    // 
    int32_t bet;
    // 
    int64_t joinTime;
    // 
    PendingRosterMemberState memberState;
    // 
    int32_t pay;
    // 
    uint64_t playerId;
    // 
    Position position;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberDTO& v) {
    j["bet"] = v.bet;
    j["joinTime"] = v.joinTime;
    j["memberState"] = v.memberState;
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
    j["position"] = v.position;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberDTO& v) {
    v.bet = j.at("bet").get<int32_t>;
    v.joinTime = j.at("joinTime").get<int64_t>;
    v.memberState = j.at("memberState").get<PendingRosterMemberState>;
    v.pay = j.at("pay").get<int32_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.position = j.at("position").get<Position>;
  }

}
#endif // SWAGGER_TYPES_PendingRosterMemberDTO_HPP
