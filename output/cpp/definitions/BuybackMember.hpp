#pragma once
#include <json.hpp>
#include <optional>
#include "BuybackState.hpp"
namespace leagueapi {
  struct BuybackMember_t {
    int32_t bet;
    BuybackState_t buybackState;
    int32_t pay;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const BuybackMember_t& v) {
    j["bet"] = v.bet;
    j["buybackState"] = v.buybackState;
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, BuybackMember_t& v) {
    v.bet = j.at("bet").get<int32_t>();
    v.buybackState = j.at("buybackState").get<BuybackState_t>();
    v.pay = j.at("pay").get<int32_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
}
