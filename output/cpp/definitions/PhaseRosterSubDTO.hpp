#pragma once
#include <json.hpp>
#include <optional>
#include "SubState.hpp"
#include "Position.hpp"
namespace leagueapi {
  struct PhaseRosterSubDTO_t {
    Position_t position;
    uint64_t playerId;
    SubState_t subState;
    int32_t pay;
    uint64_t replacedPlayerId;
    int32_t bet;
  };

  inline void to_json(nlohmann::json& j, const PhaseRosterSubDTO_t& v) {
    j["position"] = v.position;
    j["playerId"] = v.playerId;
    j["subState"] = v.subState;
    j["pay"] = v.pay;
    j["replacedPlayerId"] = v.replacedPlayerId;
    j["bet"] = v.bet;
  }

  inline void from_json(const nlohmann::json& j, PhaseRosterSubDTO_t& v) {
    v.position = j.at("position").get<Position_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.subState = j.at("subState").get<SubState_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>();
    v.bet = j.at("bet").get<int32_t>();
  }
  inline std::string to_string(const PhaseRosterSubDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
