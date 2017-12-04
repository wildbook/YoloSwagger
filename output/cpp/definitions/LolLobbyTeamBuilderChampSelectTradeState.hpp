#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeState_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderChampSelectTradeState {
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

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectTradeState& v) {
    switch(v) {
      case LolLobbyTeamBuilderChampSelectTradeState::AVAILABLE:
        j = "AVAILABLE";
      break;
      case LolLobbyTeamBuilderChampSelectTradeState::RECEIVED:
        j = "RECEIVED";
      break;
      case LolLobbyTeamBuilderChampSelectTradeState::BUSY:
        j = "BUSY";
      break;
      case LolLobbyTeamBuilderChampSelectTradeState::SENT:
        j = "SENT";
      break;
      case LolLobbyTeamBuilderChampSelectTradeState::INVALID:
        j = "INVALID";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectTradeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "AVAILABLE"){
      v = LolLobbyTeamBuilderChampSelectTradeState::AVAILABLE;
      return;
    }
    if(s == "RECEIVED"){
      v = LolLobbyTeamBuilderChampSelectTradeState::RECEIVED;
      return;
    }
    if(s == "BUSY"){
      v = LolLobbyTeamBuilderChampSelectTradeState::BUSY;
      return;
    }
    if(s == "SENT"){
      v = LolLobbyTeamBuilderChampSelectTradeState::SENT;
      return;
    }
    if(s == "INVALID"){
      v = LolLobbyTeamBuilderChampSelectTradeState::INVALID;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectTradeState_HPP
