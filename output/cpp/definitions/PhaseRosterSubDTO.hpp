#ifndef SWAGGER_TYPES_PhaseRosterSubDTO_HPP
#define SWAGGER_TYPES_PhaseRosterSubDTO_HPP
#include <json.hpp>
#include "SubState.hpp"
#include "Position.hpp"
namespace leagueapi {
  // 
  struct PhaseRosterSubDTO {
    // 
    uint64_t replacedPlayerId;
    // 
    SubState subState;
    // 
    uint64_t playerId;
    // 
    int32_t pay;
    // 
    Position position;
    // 
    int32_t bet;
  };

  inline void to_json(nlohmann::json& j, const PhaseRosterSubDTO& v) {
    j["replacedPlayerId"] = v.replacedPlayerId;
    j["subState"] = v.subState;
    j["playerId"] = v.playerId;
    j["pay"] = v.pay;
    j["position"] = v.position;
    j["bet"] = v.bet;
  }

  inline void from_json(const nlohmann::json& j, PhaseRosterSubDTO& v) {
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>;
    v.subState = j.at("subState").get<SubState>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.pay = j.at("pay").get<int32_t>;
    v.position = j.at("position").get<Position>;
    v.bet = j.at("bet").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_PhaseRosterSubDTO_HPP
