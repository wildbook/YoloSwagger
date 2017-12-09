#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
#include "PendingRosterMemberState.hpp"
namespace leagueapi {
  struct PendingRosterMemberDTO_t {
    int32_t pay;
    PendingRosterMemberState_t memberState;
    Position_t position;
    int32_t bet;
    int64_t joinTime;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterMemberDTO_t& v) {
    j["pay"] = v.pay;
    j["memberState"] = v.memberState;
    j["position"] = v.position;
    j["bet"] = v.bet;
    j["joinTime"] = v.joinTime;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterMemberDTO_t& v) {
    v.pay = j.at("pay").get<int32_t>();
    v.memberState = j.at("memberState").get<PendingRosterMemberState_t>();
    v.position = j.at("position").get<Position_t>();
    v.bet = j.at("bet").get<int32_t>();
    v.joinTime = j.at("joinTime").get<int64_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
  inline std::string to_string(const PendingRosterMemberDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
