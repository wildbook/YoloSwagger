#ifndef SWAGGER_TYPES_LolPftGameflowPhase_HPP
#define SWAGGER_TYPES_LolPftGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPftGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolPftGameflowPhase& v) {
    switch(v) {
      case LolPftGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolPftGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolPftGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolPftGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolPftGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolPftGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolPftGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolPftGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolPftGameflowPhase::None:
        j = "None";
      break;
      case LolPftGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolPftGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolPftGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolPftGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolPftGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolPftGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolPftGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPftGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPftGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolPftGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolPftGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolPftGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPftGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolPftGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPftGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPftGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolPftGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPftGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPftGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPftGameflowPhase_HPP
