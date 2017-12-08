#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
#include "SubState.hpp"
namespace leagueapi {
  struct PhaseRosterSubDTO_t {
    Position_t position;
    int32_t bet;
    int32_t pay;
    uint64_t replacedPlayerId;
    SubState_t subState;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const PhaseRosterSubDTO_t& v) {
    j["position"] = v.position;
    j["bet"] = v.bet;
    j["pay"] = v.pay;
    j["replacedPlayerId"] = v.replacedPlayerId;
    j["subState"] = v.subState;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, PhaseRosterSubDTO_t& v) {
    v.position = j.at("position").get<Position_t>();
    v.bet = j.at("bet").get<int32_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>();
    v.subState = j.at("subState").get<SubState_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
  inline std::string to_string(const PhaseRosterSubDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
