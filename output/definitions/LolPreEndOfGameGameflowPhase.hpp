#ifndef SWAGGER_TYPES_LolPreEndOfGameGameflowPhase_HPP
#define SWAGGER_TYPES_LolPreEndOfGameGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPreEndOfGameGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolPreEndOfGameGameflowPhase& v) {
    switch(v) {
      case LolPreEndOfGameGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolPreEndOfGameGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolPreEndOfGameGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolPreEndOfGameGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolPreEndOfGameGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolPreEndOfGameGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolPreEndOfGameGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolPreEndOfGameGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolPreEndOfGameGameflowPhase::None:
        j = "None";
      break;
      case LolPreEndOfGameGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolPreEndOfGameGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolPreEndOfGameGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolPreEndOfGameGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolPreEndOfGameGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPreEndOfGameGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolPreEndOfGameGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolPreEndOfGameGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPreEndOfGameGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPreEndOfGameGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolPreEndOfGameGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolPreEndOfGameGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolPreEndOfGameGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPreEndOfGameGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolPreEndOfGameGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPreEndOfGameGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPreEndOfGameGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolPreEndOfGameGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPreEndOfGameGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPreEndOfGameGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPreEndOfGameGameflowPhase_HPP
