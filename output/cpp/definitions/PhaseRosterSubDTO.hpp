#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
#include "SubState.hpp"
namespace leagueapi {
  struct PhaseRosterSubDTO_t {
    int32_t bet;
    int32_t pay;
    uint64_t playerId;
    Position_t position;
    uint64_t replacedPlayerId;
    SubState_t subState;
  };

  inline void to_json(nlohmann::json& j, const PhaseRosterSubDTO_t& v) {
    j["bet"] = v.bet;
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
    j["position"] = v.position;
    j["replacedPlayerId"] = v.replacedPlayerId;
    j["subState"] = v.subState;
  }

  inline void from_json(const nlohmann::json& j, PhaseRosterSubDTO_t& v) {
    v.bet = j.at("bet").get<int32_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.position = j.at("position").get<Position_t>();
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>();
    v.subState = j.at("subState").get<SubState_t>();
  }
}
