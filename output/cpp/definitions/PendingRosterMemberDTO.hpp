#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
#include "PendingRosterMemberState.hpp"
namespace leagueapi {
  struct PendingRosterMemberDTO_t {
    Position_t position;
    int32_t bet;
    int32_t pay;
    int64_t joinTime;
    PendingRosterMemberState_t memberState;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberDTO_t& v) {
    j["position"] = v.position;
    j["bet"] = v.bet;
    j["pay"] = v.pay;
    j["joinTime"] = v.joinTime;
    j["memberState"] = v.memberState;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberDTO_t& v) {
    v.position = j.at("position").get<Position_t>();
    v.bet = j.at("bet").get<int32_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.joinTime = j.at("joinTime").get<int64_t>();
    v.memberState = j.at("memberState").get<PendingRosterMemberState_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
  inline std::string to_string(const PendingRosterMemberDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
