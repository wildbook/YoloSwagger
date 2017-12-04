#ifndef SWAGGER_TYPES_BuybackMember_HPP
#define SWAGGER_TYPES_BuybackMember_HPP
#include <json.hpp>
#include "BuybackState.hpp"
namespace leagueapi {
  // 
  struct BuybackMember {
    // 
    BuybackState buybackState;
    // 
    int32_t pay;
    // 
    uint64_t playerId;
    // 
    int32_t bet;
  };

  inline void to_json(nlohmann::json& j, const BuybackMember& v) {
    j["buybackState"] = v.buybackState;
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
    j["bet"] = v.bet;
  }

  inline void from_json(const nlohmann::json& j, BuybackMember& v) {
    v.buybackState = j.at("buybackState").get<BuybackState>;
    v.pay = j.at("pay").get<int32_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.bet = j.at("bet").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_BuybackMember_HPP
