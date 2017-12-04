#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeState_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChampSelectLegacyChampSelectTradeState {
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

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectTradeState& v) {
    switch(v) {
      case LolChampSelectLegacyChampSelectTradeState::AVAILABLE:
        j = "AVAILABLE";
      break;
      case LolChampSelectLegacyChampSelectTradeState::RECEIVED:
        j = "RECEIVED";
      break;
      case LolChampSelectLegacyChampSelectTradeState::BUSY:
        j = "BUSY";
      break;
      case LolChampSelectLegacyChampSelectTradeState::SENT:
        j = "SENT";
      break;
      case LolChampSelectLegacyChampSelectTradeState::INVALID:
        j = "INVALID";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectTradeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "AVAILABLE"){
      v = LolChampSelectLegacyChampSelectTradeState::AVAILABLE;
      return;
    }
    if(s == "RECEIVED"){
      v = LolChampSelectLegacyChampSelectTradeState::RECEIVED;
      return;
    }
    if(s == "BUSY"){
      v = LolChampSelectLegacyChampSelectTradeState::BUSY;
      return;
    }
    if(s == "SENT"){
      v = LolChampSelectLegacyChampSelectTradeState::SENT;
      return;
    }
    if(s == "INVALID"){
      v = LolChampSelectLegacyChampSelectTradeState::INVALID;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeState_HPP
