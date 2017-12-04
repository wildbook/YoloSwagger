#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeState_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChampSelectLegacyChampSelectTradeState {
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

  void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectTradeState& v) {
    switch(v) {
      case LolChampSelectLegacyChampSelectTradeState::AVAILABLE:
        j = "AVAILABLE";
      break;
      case LolChampSelectLegacyChampSelectTradeState::BUSY:
        j = "BUSY";
      break;
      case LolChampSelectLegacyChampSelectTradeState::INVALID:
        j = "INVALID";
      break;
      case LolChampSelectLegacyChampSelectTradeState::RECEIVED:
        j = "RECEIVED";
      break;
      case LolChampSelectLegacyChampSelectTradeState::SENT:
        j = "SENT";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectTradeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "AVAILABLE"){
      v = LolChampSelectLegacyChampSelectTradeState::AVAILABLE;
      return;
    }
    if(s == "BUSY"){
      v = LolChampSelectLegacyChampSelectTradeState::BUSY;
      return;
    }
    if(s == "INVALID"){
      v = LolChampSelectLegacyChampSelectTradeState::INVALID;
      return;
    }
    if(s == "RECEIVED"){
      v = LolChampSelectLegacyChampSelectTradeState::RECEIVED;
      return;
    }
    if(s == "SENT"){
      v = LolChampSelectLegacyChampSelectTradeState::SENT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeState_HPP
