#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterMemberState.hpp"
#include "Position.hpp"
namespace leagueapi {
  struct PendingRosterMemberDTO_t {
    int64_t joinTime;
    int32_t pay;
    int32_t bet;
    uint64_t playerId;
    PendingRosterMemberState_t memberState;
    Position_t position;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberDTO_t& v) {
    j["joinTime"] = v.joinTime;
    j["pay"] = v.pay;
    j["bet"] = v.bet;
    j["playerId"] = v.playerId;
    j["memberState"] = v.memberState;
    j["position"] = v.position;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberDTO_t& v) {
    v.joinTime = j.at("joinTime").get<int64_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.bet = j.at("bet").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.memberState = j.at("memberState").get<PendingRosterMemberState_t>();
    v.position = j.at("position").get<Position_t>();
  }
  inline std::string to_string(const PendingRosterMemberDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
