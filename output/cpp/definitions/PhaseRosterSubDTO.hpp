#pragma once
#include <json.hpp>
#include <optional>
#include "SubState.hpp"
#include "Position.hpp"
namespace leagueapi {
  struct PhaseRosterSubDTO_t {
    uint64_t_t replacedPlayerId;
    SubState_t subState;
    uint64_t_t playerId;
    int32_t_t pay;
    Position_t position;
    int32_t_t bet;
  };

  inline void to_json(nlohmann::json& j, const PhaseRosterSubDTO_t& v) {
    j["replacedPlayerId"] = v.replacedPlayerId;
    j["subState"] = v.subState;
    j["playerId"] = v.playerId;
    j["pay"] = v.pay;
    j["position"] = v.position;
    j["bet"] = v.bet;
  }

  inline void from_json(const nlohmann::json& j, PhaseRosterSubDTO_t& v) {
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t_t>();
    v.subState = j.at("subState").get<SubState_t>();
    v.playerId = j.at("playerId").get<uint64_t_t>();
    v.pay = j.at("pay").get<int32_t_t>();
    v.position = j.at("position").get<Position_t>();
    v.bet = j.at("bet").get<int32_t_t>();
  }
  inline std::string to_string(const PhaseRosterSubDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
