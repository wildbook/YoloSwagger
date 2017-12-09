#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowGameflowPhase_t {
    CheckedIntoTournament_E = 3,
    Lobby_E = 1,
    Matchmaking_E = 2,
    PreEndOfGame_E = 11,
    FailedToLaunch_E = 7,
    None_E = 0,
    WaitingForStats_E = 10,
    TerminatedInError_E = 13,
    GameStart_E = 6,
    ReadyCheck_E = 4,
    InProgress_E = 8,
    Reconnect_E = 9,
    EndOfGame_E = 12,
    ChampSelect_E = 5,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowPhase_t& v) {
    switch(v) {
      case LolGameflowGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolGameflowGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolGameflowGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolGameflowGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolGameflowGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolGameflowGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolGameflowGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolGameflowGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolGameflowGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolGameflowGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolGameflowGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolGameflowGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolGameflowGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolGameflowGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolGameflowGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "Lobby"){
      v = LolGameflowGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolGameflowGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolGameflowGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolGameflowGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "None"){
      v = LolGameflowGameflowPhase_t::None_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolGameflowGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolGameflowGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "GameStart"){
      v = LolGameflowGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolGameflowGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "InProgress"){
      v = LolGameflowGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolGameflowGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolGameflowGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolGameflowGameflowPhase_t::ChampSelect_E;
      return;
    }
  }
  inline std::string to_string(const LolGameflowGameflowPhase_t& v) {
    switch(v) {
      case LolGameflowGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolGameflowGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolGameflowGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
      case LolGameflowGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolGameflowGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolGameflowGameflowPhase_t::None_E:
        return "None";
      case LolGameflowGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolGameflowGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolGameflowGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolGameflowGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolGameflowGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolGameflowGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolGameflowGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolGameflowGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
    }
  }

}
