#ifndef SWAGGER_TYPES_LolSimpleDialogMessagesGameflowPhase_HPP
#define SWAGGER_TYPES_LolSimpleDialogMessagesGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolSimpleDialogMessagesGameflowPhase {
    // 
    ChampSelect = 5,
    // 
    CheckedIntoTournament = 3,
    // 
    EndOfGame = 12,
    // 
    FailedToLaunch = 7,
    // 
    GameStart = 6,
    // 
    InProgress = 8,
    // 
    Lobby = 1,
    // 
    Matchmaking = 2,
    // 
    None = 0,
    // 
    PreEndOfGame = 11,
    // 
    ReadyCheck = 4,
    // 
    Reconnect = 9,
    // 
    TerminatedInError = 13,
    // 
    WaitingForStats = 10,
  };

  void to_json(nlohmann::json& j, const LolSimpleDialogMessagesGameflowPhase& v) {
    switch(v) {
      case LolSimpleDialogMessagesGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolSimpleDialogMessagesGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolSimpleDialogMessagesGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolSimpleDialogMessagesGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolSimpleDialogMessagesGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolSimpleDialogMessagesGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolSimpleDialogMessagesGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolSimpleDialogMessagesGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolSimpleDialogMessagesGameflowPhase::None:
        j = "None";
      break;
      case LolSimpleDialogMessagesGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolSimpleDialogMessagesGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolSimpleDialogMessagesGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolSimpleDialogMessagesGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolSimpleDialogMessagesGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolSimpleDialogMessagesGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolSimpleDialogMessagesGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolSimpleDialogMessagesGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolSimpleDialogMessagesGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolSimpleDialogMessagesGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolSimpleDialogMessagesGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolSimpleDialogMessagesGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolSimpleDialogMessagesGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolSimpleDialogMessagesGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolSimpleDialogMessagesGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolSimpleDialogMessagesGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolSimpleDialogMessagesGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolSimpleDialogMessagesGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolSimpleDialogMessagesGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolSimpleDialogMessagesGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolSimpleDialogMessagesGameflowPhase_HPP
