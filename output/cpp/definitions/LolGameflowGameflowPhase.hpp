#ifndef SWAGGER_TYPES_LolGameflowGameflowPhase_HPP
#define SWAGGER_TYPES_LolGameflowGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowPhase& v) {
    switch(v) {
      case LolGameflowGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolGameflowGameflowPhase::None:
        j = "None";
      break;
      case LolGameflowGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolGameflowGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolGameflowGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolGameflowGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolGameflowGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolGameflowGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolGameflowGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolGameflowGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolGameflowGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolGameflowGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolGameflowGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolGameflowGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolGameflowGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolGameflowGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolGameflowGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolGameflowGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolGameflowGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolGameflowGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolGameflowGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolGameflowGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolGameflowGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolGameflowGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolGameflowGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolGameflowGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowPhase_HPP
