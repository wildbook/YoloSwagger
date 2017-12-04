#ifndef SWAGGER_TYPES_PhaseRosterSubDTO_HPP
#define SWAGGER_TYPES_PhaseRosterSubDTO_HPP
#include <json.hpp>
#include "Position.hpp"
#include "SubState.hpp"
namespace test {
  // 
  struct PhaseRosterSubDTO {
'    // 
    int32_t bet;
    // 
    int32_t pay;
    // 
    uint64_t playerId;
    // 
    Position position;
    // 
    uint64_t replacedPlayerId;
    // 
    SubState subState;
  };

  void to_json(nlohmann::json& j, const PhaseRosterSubDTO& v) {
    j["bet"] = v.bet;
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
    j["position"] = v.position;
    j["replacedPlayerId"] = v.replacedPlayerId;
    j["subState"] = v.subState;
  }

  void from_json(const nlohmann::json& j, PhaseRosterSubDTO& v) {
    v.bet = j.at("bet").get<int32_t>;
    v.pay = j.at("pay").get<int32_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.position = j.at("position").get<Position>;
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>;
    v.subState = j.at("subState").get<SubState>;
  }

}
#endif // SWAGGER_TYPES_PhaseRosterSubDTO_HPP
