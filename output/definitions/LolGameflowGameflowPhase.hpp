#ifndef SWAGGER_TYPES_LolGameflowGameflowPhase_HPP
#define SWAGGER_TYPES_LolGameflowGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowGameflowPhase {
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

  void to_json(nlohmann::json& j, const LolGameflowGameflowPhase& v) {
    switch(v) {
      case LolGameflowGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolGameflowGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolGameflowGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolGameflowGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolGameflowGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolGameflowGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolGameflowGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolGameflowGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolGameflowGameflowPhase::None:
        j = "None";
      break;
      case LolGameflowGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolGameflowGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolGameflowGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolGameflowGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolGameflowGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolGameflowGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolGameflowGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolGameflowGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolGameflowGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolGameflowGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolGameflowGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolGameflowGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolGameflowGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolGameflowGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolGameflowGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolGameflowGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolGameflowGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolGameflowGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolGameflowGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolGameflowGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowPhase_HPP
