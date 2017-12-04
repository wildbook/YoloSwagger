#ifndef SWAGGER_TYPES_LolPlayerBehaviorGameflowPhase_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPlayerBehaviorGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorGameflowPhase& v) {
    switch(v) {
      case LolPlayerBehaviorGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolPlayerBehaviorGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolPlayerBehaviorGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolPlayerBehaviorGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolPlayerBehaviorGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolPlayerBehaviorGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolPlayerBehaviorGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolPlayerBehaviorGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolPlayerBehaviorGameflowPhase::None:
        j = "None";
      break;
      case LolPlayerBehaviorGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolPlayerBehaviorGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolPlayerBehaviorGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolPlayerBehaviorGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolPlayerBehaviorGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolPlayerBehaviorGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolPlayerBehaviorGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPlayerBehaviorGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPlayerBehaviorGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolPlayerBehaviorGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolPlayerBehaviorGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolPlayerBehaviorGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPlayerBehaviorGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolPlayerBehaviorGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPlayerBehaviorGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPlayerBehaviorGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolPlayerBehaviorGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPlayerBehaviorGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPlayerBehaviorGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorGameflowPhase_HPP
