#ifndef SWAGGER_TYPES_LolPerksChampSelectTradeState_HPP
#define SWAGGER_TYPES_LolPerksChampSelectTradeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPerksChampSelectTradeState {
    // 
    AVAILABLE = 1,
    // 
    BUSY = 2,
    // 
    INVALID = 3,
    // 
    RECEIVED = 4,
    // 
    SENT = 5,
  };

  void to_json(nlohmann::json& j, const LolPerksChampSelectTradeState& v) {
    switch(v) {
      case LolPerksChampSelectTradeState::AVAILABLE:
        j = "AVAILABLE";
      break;
      case LolPerksChampSelectTradeState::BUSY:
        j = "BUSY";
      break;
      case LolPerksChampSelectTradeState::INVALID:
        j = "INVALID";
      break;
      case LolPerksChampSelectTradeState::RECEIVED:
        j = "RECEIVED";
      break;
      case LolPerksChampSelectTradeState::SENT:
        j = "SENT";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolPerksChampSelectTradeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "AVAILABLE"){
      v = LolPerksChampSelectTradeState::AVAILABLE;
      return;
    }
    if(s == "BUSY"){
      v = LolPerksChampSelectTradeState::BUSY;
      return;
    }
    if(s == "INVALID"){
      v = LolPerksChampSelectTradeState::INVALID;
      return;
    }
    if(s == "RECEIVED"){
      v = LolPerksChampSelectTradeState::RECEIVED;
      return;
    }
    if(s == "SENT"){
      v = LolPerksChampSelectTradeState::SENT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectTradeState_HPP
