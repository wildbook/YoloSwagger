#ifndef SWAGGER_TYPES_LolSimpleDialogMessagesGameflowPhase_HPP
#define SWAGGER_TYPES_LolSimpleDialogMessagesGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolSimpleDialogMessagesGameflowPhase {
    // 
    CheckedIntoTournament = 3,
    // 
    None = 0,
    // 
    EndOfGame = 12,
    // 
    ChampSelect = 5,
    // 
    FailedToLaunch = 7,
    // 
    WaitingForStats = 10,
    // 
    TerminatedInError = 13,
    // 
    Reconnect = 9,
    // 
    GameStart = 6,
    // 
    ReadyCheck = 4,
    // 
    InProgress = 8,
    // 
    PreEndOfGame = 11,
    // 
    Lobby = 1,
    // 
    Matchmaking = 2,
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesGameflowPhase& v) {
    switch(v) {
      case LolSimpleDialogMessagesGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolSimpleDialogMessagesGameflowPhase::None:
        j = "None";
      break;
      case LolSimpleDialogMessagesGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolSimpleDialogMessagesGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolSimpleDialogMessagesGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolSimpleDialogMessagesGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolSimpleDialogMessagesGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolSimpleDialogMessagesGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolSimpleDialogMessagesGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolSimpleDialogMessagesGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolSimpleDialogMessagesGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolSimpleDialogMessagesGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolSimpleDialogMessagesGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolSimpleDialogMessagesGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolSimpleDialogMessagesGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolSimpleDialogMessagesGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolSimpleDialogMessagesGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolSimpleDialogMessagesGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolSimpleDialogMessagesGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolSimpleDialogMessagesGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolSimpleDialogMessagesGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolSimpleDialogMessagesGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolSimpleDialogMessagesGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolSimpleDialogMessagesGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolSimpleDialogMessagesGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolSimpleDialogMessagesGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolSimpleDialogMessagesGameflowPhase_HPP
