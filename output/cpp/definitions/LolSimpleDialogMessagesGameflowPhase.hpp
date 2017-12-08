#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolSimpleDialogMessagesGameflowPhase_t {
    Reconnect_E = 9,
    EndOfGame_E = 12,
    ChampSelect_E = 5,
    CheckedIntoTournament_E = 3,
    None_E = 0,
    PreEndOfGame_E = 11,
    WaitingForStats_E = 10,
    TerminatedInError_E = 13,
    ReadyCheck_E = 4,
    FailedToLaunch_E = 7,
    Matchmaking_E = 2,
    InProgress_E = 8,
    GameStart_E = 6,
    Lobby_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesGameflowPhase_t& v) {
    switch(v) {
      case LolSimpleDialogMessagesGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolSimpleDialogMessagesGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Reconnect"){
      v = LolSimpleDialogMessagesGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolSimpleDialogMessagesGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolSimpleDialogMessagesGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolSimpleDialogMessagesGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolSimpleDialogMessagesGameflowPhase_t::None_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolSimpleDialogMessagesGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolSimpleDialogMessagesGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolSimpleDialogMessagesGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolSimpleDialogMessagesGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolSimpleDialogMessagesGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolSimpleDialogMessagesGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "InProgress"){
      v = LolSimpleDialogMessagesGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "GameStart"){
      v = LolSimpleDialogMessagesGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "Lobby"){
      v = LolSimpleDialogMessagesGameflowPhase_t::Lobby_E;
      return;
    }
  }
  inline std::string to_string(const LolSimpleDialogMessagesGameflowPhase_t& v) {
    switch(v) {
      case LolSimpleDialogMessagesGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolSimpleDialogMessagesGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolSimpleDialogMessagesGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolSimpleDialogMessagesGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolSimpleDialogMessagesGameflowPhase_t::None_E:
        return "None";
      case LolSimpleDialogMessagesGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolSimpleDialogMessagesGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolSimpleDialogMessagesGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolSimpleDialogMessagesGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolSimpleDialogMessagesGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolSimpleDialogMessagesGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
      case LolSimpleDialogMessagesGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolSimpleDialogMessagesGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolSimpleDialogMessagesGameflowPhase_t::Lobby_E:
        return "Lobby";
    }
  }

}
