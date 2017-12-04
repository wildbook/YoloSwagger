#ifndef SWAGGER_TYPES_LolMatchmakingGameflowPhase_HPP
#define SWAGGER_TYPES_LolMatchmakingGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowPhase& v) {
    switch(v) {
      case LolMatchmakingGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolMatchmakingGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolMatchmakingGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolMatchmakingGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolMatchmakingGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolMatchmakingGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolMatchmakingGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolMatchmakingGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolMatchmakingGameflowPhase::None:
        j = "None";
      break;
      case LolMatchmakingGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolMatchmakingGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolMatchmakingGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolMatchmakingGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolMatchmakingGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolMatchmakingGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolMatchmakingGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolMatchmakingGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolMatchmakingGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolMatchmakingGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolMatchmakingGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolMatchmakingGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolMatchmakingGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolMatchmakingGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolMatchmakingGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolMatchmakingGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolMatchmakingGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolMatchmakingGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolMatchmakingGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingGameflowPhase_HPP
