#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingGameflowPhase_t {
    CheckedIntoTournament_E = 3,
    None_E = 0,
    EndOfGame_E = 12,
    ChampSelect_E = 5,
    FailedToLaunch_E = 7,
    WaitingForStats_E = 10,
    TerminatedInError_E = 13,
    Reconnect_E = 9,
    GameStart_E = 6,
    ReadyCheck_E = 4,
    InProgress_E = 8,
    PreEndOfGame_E = 11,
    Lobby_E = 1,
    Matchmaking_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowPhase_t& v) {
    switch(v) {
      case LolMatchmakingGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolMatchmakingGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolMatchmakingGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolMatchmakingGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolMatchmakingGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolMatchmakingGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolMatchmakingGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolMatchmakingGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolMatchmakingGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolMatchmakingGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolMatchmakingGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolMatchmakingGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolMatchmakingGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolMatchmakingGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolMatchmakingGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolMatchmakingGameflowPhase_t::None_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolMatchmakingGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolMatchmakingGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolMatchmakingGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolMatchmakingGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolMatchmakingGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolMatchmakingGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "GameStart"){
      v = LolMatchmakingGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolMatchmakingGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "InProgress"){
      v = LolMatchmakingGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolMatchmakingGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Lobby"){
      v = LolMatchmakingGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolMatchmakingGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolMatchmakingGameflowPhase_t& v) {
    switch(v) {
      case LolMatchmakingGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolMatchmakingGameflowPhase_t::None_E:
        return "None";
      case LolMatchmakingGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolMatchmakingGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolMatchmakingGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolMatchmakingGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolMatchmakingGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolMatchmakingGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolMatchmakingGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolMatchmakingGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolMatchmakingGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolMatchmakingGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolMatchmakingGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolMatchmakingGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
