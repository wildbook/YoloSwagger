#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPlayerBehaviorGameflowPhase_t {
    Lobby_E = 1,
    WaitingForStats_E = 10,
    ChampSelect_E = 5,
    PreEndOfGame_E = 11,
    InProgress_E = 8,
    EndOfGame_E = 12,
    CheckedIntoTournament_E = 3,
    None_E = 0,
    GameStart_E = 6,
    FailedToLaunch_E = 7,
    ReadyCheck_E = 4,
    Reconnect_E = 9,
    TerminatedInError_E = 13,
    Matchmaking_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorGameflowPhase_t& v) {
    switch(v) {
      case LolPlayerBehaviorGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolPlayerBehaviorGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolPlayerBehaviorGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolPlayerBehaviorGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolPlayerBehaviorGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolPlayerBehaviorGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolPlayerBehaviorGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolPlayerBehaviorGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolPlayerBehaviorGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolPlayerBehaviorGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolPlayerBehaviorGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolPlayerBehaviorGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolPlayerBehaviorGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolPlayerBehaviorGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Lobby"){
      v = LolPlayerBehaviorGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPlayerBehaviorGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolPlayerBehaviorGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPlayerBehaviorGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "InProgress"){
      v = LolPlayerBehaviorGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPlayerBehaviorGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolPlayerBehaviorGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolPlayerBehaviorGameflowPhase_t::None_E;
      return;
    }
    if(s == "GameStart"){
      v = LolPlayerBehaviorGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPlayerBehaviorGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPlayerBehaviorGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolPlayerBehaviorGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPlayerBehaviorGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPlayerBehaviorGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolPlayerBehaviorGameflowPhase_t& v) {
    switch(v) {
      case LolPlayerBehaviorGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolPlayerBehaviorGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolPlayerBehaviorGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolPlayerBehaviorGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolPlayerBehaviorGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolPlayerBehaviorGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolPlayerBehaviorGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolPlayerBehaviorGameflowPhase_t::None_E:
        return "None";
      case LolPlayerBehaviorGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolPlayerBehaviorGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolPlayerBehaviorGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolPlayerBehaviorGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolPlayerBehaviorGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolPlayerBehaviorGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
