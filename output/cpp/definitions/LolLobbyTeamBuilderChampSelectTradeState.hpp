#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderChampSelectTradeState_t {
    RECEIVED_E = 4,
    BUSY_E = 2,
    INVALID_E = 3,
    SENT_E = 5,
    AVAILABLE_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectTradeState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderChampSelectTradeState_t::RECEIVED_E:
        j = "RECEIVED";
      break;
      case LolLobbyTeamBuilderChampSelectTradeState_t::BUSY_E:
        j = "BUSY";
      break;
      case LolLobbyTeamBuilderChampSelectTradeState_t::INVALID_E:
        j = "INVALID";
      break;
      case LolLobbyTeamBuilderChampSelectTradeState_t::SENT_E:
        j = "SENT";
      break;
      case LolLobbyTeamBuilderChampSelectTradeState_t::AVAILABLE_E:
        j = "AVAILABLE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectTradeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "RECEIVED"){
      v = LolLobbyTeamBuilderChampSelectTradeState_t::RECEIVED_E;
      return;
    }
    if(s == "BUSY"){
      v = LolLobbyTeamBuilderChampSelectTradeState_t::BUSY_E;
      return;
    }
    if(s == "INVALID"){
      v = LolLobbyTeamBuilderChampSelectTradeState_t::INVALID_E;
      return;
    }
    if(s == "SENT"){
      v = LolLobbyTeamBuilderChampSelectTradeState_t::SENT_E;
      return;
    }
    if(s == "AVAILABLE"){
      v = LolLobbyTeamBuilderChampSelectTradeState_t::AVAILABLE_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectTradeState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderChampSelectTradeState_t::RECEIVED_E:
        return "RECEIVED";
      case LolLobbyTeamBuilderChampSelectTradeState_t::BUSY_E:
        return "BUSY";
      case LolLobbyTeamBuilderChampSelectTradeState_t::INVALID_E:
        return "INVALID";
      case LolLobbyTeamBuilderChampSelectTradeState_t::SENT_E:
        return "SENT";
      case LolLobbyTeamBuilderChampSelectTradeState_t::AVAILABLE_E:
        return "AVAILABLE";
    }
  }

}
