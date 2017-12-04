#ifndef SWAGGER_TYPES_LolChampSelectChampSelectTradeState_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectTradeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChampSelectChampSelectTradeState {
    // 
    AVAILABLE = 1,
    // 
    RECEIVED = 4,
    // 
    BUSY = 2,
    // 
    SENT = 5,
    // 
    INVALID = 3,
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectTradeState& v) {
    switch(v) {
      case LolChampSelectChampSelectTradeState::AVAILABLE:
        j = "AVAILABLE";
      break;
      case LolChampSelectChampSelectTradeState::RECEIVED:
        j = "RECEIVED";
      break;
      case LolChampSelectChampSelectTradeState::BUSY:
        j = "BUSY";
      break;
      case LolChampSelectChampSelectTradeState::SENT:
        j = "SENT";
      break;
      case LolChampSelectChampSelectTradeState::INVALID:
        j = "INVALID";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectTradeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "AVAILABLE"){
      v = LolChampSelectChampSelectTradeState::AVAILABLE;
      return;
    }
    if(s == "RECEIVED"){
      v = LolChampSelectChampSelectTradeState::RECEIVED;
      return;
    }
    if(s == "BUSY"){
      v = LolChampSelectChampSelectTradeState::BUSY;
      return;
    }
    if(s == "SENT"){
      v = LolChampSelectChampSelectTradeState::SENT;
      return;
    }
    if(s == "INVALID"){
      v = LolChampSelectChampSelectTradeState::INVALID;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectTradeState_HPP
