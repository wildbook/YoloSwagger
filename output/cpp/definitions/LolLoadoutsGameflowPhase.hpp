#ifndef SWAGGER_TYPES_LolLoadoutsGameflowPhase_HPP
#define SWAGGER_TYPES_LolLoadoutsGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLoadoutsGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowPhase& v) {
    switch(v) {
      case LolLoadoutsGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolLoadoutsGameflowPhase::None:
        j = "None";
      break;
      case LolLoadoutsGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolLoadoutsGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolLoadoutsGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolLoadoutsGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolLoadoutsGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolLoadoutsGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolLoadoutsGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolLoadoutsGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolLoadoutsGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolLoadoutsGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolLoadoutsGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolLoadoutsGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolLoadoutsGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolLoadoutsGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLoadoutsGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolLoadoutsGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLoadoutsGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLoadoutsGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLoadoutsGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolLoadoutsGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolLoadoutsGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLoadoutsGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolLoadoutsGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLoadoutsGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsGameflowPhase_HPP
