#ifndef SWAGGER_TYPES_LolPlayerBehaviorGameflowPhase_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPlayerBehaviorGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorGameflowPhase& v) {
    switch(v) {
      case LolPlayerBehaviorGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolPlayerBehaviorGameflowPhase::None:
        j = "None";
      break;
      case LolPlayerBehaviorGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolPlayerBehaviorGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolPlayerBehaviorGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolPlayerBehaviorGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolPlayerBehaviorGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolPlayerBehaviorGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolPlayerBehaviorGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolPlayerBehaviorGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolPlayerBehaviorGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolPlayerBehaviorGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolPlayerBehaviorGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolPlayerBehaviorGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolPlayerBehaviorGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolPlayerBehaviorGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPlayerBehaviorGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolPlayerBehaviorGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPlayerBehaviorGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPlayerBehaviorGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPlayerBehaviorGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolPlayerBehaviorGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolPlayerBehaviorGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPlayerBehaviorGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolPlayerBehaviorGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPlayerBehaviorGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorGameflowPhase_HPP
