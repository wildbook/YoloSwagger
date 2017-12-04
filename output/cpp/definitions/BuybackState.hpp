#ifndef SWAGGER_TYPES_BuybackState_HPP
#define SWAGGER_TYPES_BuybackState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class BuybackState {
    // 
    READY = 2,
    // 
    FORCED_NOT_READY = 1,
    // 
    NOT_READY = 0,
  };

  inline void to_json(nlohmann::json& j, const BuybackState& v) {
    switch(v) {
      case BuybackState::READY:
        j = "READY";
      break;
      case BuybackState::FORCED_NOT_READY:
        j = "FORCED_NOT_READY";
      break;
      case BuybackState::NOT_READY:
        j = "NOT_READY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, BuybackState& v) {
    const auto& s = j.get<std::string>();
    if(s == "READY"){
      v = BuybackState::READY;
      return;
    }
    if(s == "FORCED_NOT_READY"){
      v = BuybackState::FORCED_NOT_READY;
      return;
    }
    if(s == "NOT_READY"){
      v = BuybackState::NOT_READY;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_BuybackState_HPP
