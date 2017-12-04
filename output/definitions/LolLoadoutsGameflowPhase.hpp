#ifndef SWAGGER_TYPES_LolLoadoutsGameflowPhase_HPP
#define SWAGGER_TYPES_LolLoadoutsGameflowPhase_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLoadoutsGameflowPhase {
'    // 
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

  void to_json(nlohmann::json& j, const LolLoadoutsGameflowPhase& v) {
    switch(v) {
      case LolLoadoutsGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolLoadoutsGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolLoadoutsGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolLoadoutsGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolLoadoutsGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolLoadoutsGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolLoadoutsGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolLoadoutsGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolLoadoutsGameflowPhase::None:
        j = "None";
      break;
      case LolLoadoutsGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolLoadoutsGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolLoadoutsGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolLoadoutsGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolLoadoutsGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLoadoutsGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolLoadoutsGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolLoadoutsGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLoadoutsGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLoadoutsGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolLoadoutsGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolLoadoutsGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolLoadoutsGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLoadoutsGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolLoadoutsGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLoadoutsGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLoadoutsGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolLoadoutsGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLoadoutsGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLoadoutsGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsGameflowPhase_HPP
