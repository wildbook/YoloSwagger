#pragma once
#include <json.hpp>
#include <optional>
#include "BuybackState.hpp"
namespace leagueapi {
  struct BuybackMember_t {
    BuybackState_t buybackState;
    int32_t_t pay;
    uint64_t_t playerId;
    int32_t_t bet;
  };

  inline void to_json(nlohmann::json& j, const BuybackMember_t& v) {
    j["buybackState"] = v.buybackState;
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
    j["bet"] = v.bet;
  }

  inline void from_json(const nlohmann::json& j, BuybackMember_t& v) {
    v.buybackState = j.at("buybackState").get<BuybackState_t>();
    v.pay = j.at("pay").get<int32_t_t>();
    v.playerId = j.at("playerId").get<uint64_t_t>();
    v.bet = j.at("bet").get<int32_t_t>();
  }
  inline std::string to_string(const BuybackMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
