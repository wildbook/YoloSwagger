#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
#include "PendingRosterMemberState.hpp"
namespace leagueapi {
  struct PendingRosterMemberDTO_t {
    int32_t bet;
    int64_t joinTime;
    PendingRosterMemberState_t memberState;
    int32_t pay;
    uint64_t playerId;
    Position_t position;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberDTO_t& v) {
    j["bet"] = v.bet;
    j["joinTime"] = v.joinTime;
    j["memberState"] = v.memberState;
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
    j["position"] = v.position;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberDTO_t& v) {
    v.bet = j.at("bet").get<int32_t>();
    v.joinTime = j.at("joinTime").get<int64_t>();
    v.memberState = j.at("memberState").get<PendingRosterMemberState_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.position = j.at("position").get<Position_t>();
  }
}
