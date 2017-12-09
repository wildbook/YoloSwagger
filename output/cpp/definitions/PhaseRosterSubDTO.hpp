#pragma once
#include <json.hpp>
#include <optional>
#include "SubState.hpp"
#include "Position.hpp"
namespace leagueapi {
  struct PhaseRosterSubDTO_t {
    SubState_t subState;
    uint64_t replacedPlayerId;
    int32_t pay;
    Position_t position;
    int32_t bet;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const PhaseRosterSubDTO_t& v) {
    j["subState"] = v.subState;
    j["replacedPlayerId"] = v.replacedPlayerId;
    j["pay"] = v.pay;
    j["position"] = v.position;
    j["bet"] = v.bet;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, PhaseRosterSubDTO_t& v) {
    v.subState = j.at("subState").get<SubState_t>();
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.position = j.at("position").get<Position_t>();
    v.bet = j.at("bet").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
  inline std::string to_string(const PhaseRosterSubDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
