#ifndef SWAGGER_TYPES_BuybackMember_HPP
#define SWAGGER_TYPES_BuybackMember_HPP
#include <json.hpp>
#include "BuybackState.hpp"
namespace leagueapi {
  // 
  struct BuybackMember {
    // 
    int32_t bet;
    // 
    BuybackState buybackState;
    // 
    int32_t pay;
    // 
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const BuybackMember& v) {
    j["bet"] = v.bet;
    j["buybackState"] = v.buybackState;
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, BuybackMember& v) {
    v.bet = j.at("bet").get<int32_t>;
    v.buybackState = j.at("buybackState").get<BuybackState>;
    v.pay = j.at("pay").get<int32_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_BuybackMember_HPP
