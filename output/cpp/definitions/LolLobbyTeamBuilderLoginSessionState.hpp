#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderLoginSessionState_t {
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLoginSessionState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderLoginSessionState_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolLobbyTeamBuilderLoginSessionState_t::ERROR_E:
        j = "ERROR";
      break;
      case LolLobbyTeamBuilderLoginSessionState_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolLobbyTeamBuilderLoginSessionState_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLoginSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolLobbyTeamBuilderLoginSessionState_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolLobbyTeamBuilderLoginSessionState_t::ERROR_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLobbyTeamBuilderLoginSessionState_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLobbyTeamBuilderLoginSessionState_t::LOGGING_OUT_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyTeamBuilderLoginSessionState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderLoginSessionState_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolLobbyTeamBuilderLoginSessionState_t::ERROR_E:
        return "ERROR";
      case LolLobbyTeamBuilderLoginSessionState_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolLobbyTeamBuilderLoginSessionState_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
    }
  }

}
