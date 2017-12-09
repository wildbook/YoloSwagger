#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
#include "PendingRosterMemberState.hpp"
namespace leagueapi {
  struct PendingRosterMemberDTO_t {
    Position_t position;
    uint64_t playerId;
    int64_t joinTime;
    int32_t pay;
    PendingRosterMemberState_t memberState;
    int32_t bet;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberDTO_t& v) {
    j["position"] = v.position;
    j["playerId"] = v.playerId;
    j["joinTime"] = v.joinTime;
    j["pay"] = v.pay;
    j["memberState"] = v.memberState;
    j["bet"] = v.bet;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberDTO_t& v) {
    v.position = j.at("position").get<Position_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.joinTime = j.at("joinTime").get<int64_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.memberState = j.at("memberState").get<PendingRosterMemberState_t>();
    v.bet = j.at("bet").get<int32_t>();
  }
  inline std::string to_string(const PendingRosterMemberDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
