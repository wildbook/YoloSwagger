#ifndef SWAGGER_TYPES_LolPreEndOfGameGameflowPhase_HPP
#define SWAGGER_TYPES_LolPreEndOfGameGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPreEndOfGameGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolPreEndOfGameGameflowPhase& v) {
    switch(v) {
      case LolPreEndOfGameGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolPreEndOfGameGameflowPhase::None:
        j = "None";
      break;
      case LolPreEndOfGameGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolPreEndOfGameGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolPreEndOfGameGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolPreEndOfGameGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolPreEndOfGameGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolPreEndOfGameGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolPreEndOfGameGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolPreEndOfGameGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolPreEndOfGameGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolPreEndOfGameGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolPreEndOfGameGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolPreEndOfGameGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPreEndOfGameGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolPreEndOfGameGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolPreEndOfGameGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPreEndOfGameGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolPreEndOfGameGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPreEndOfGameGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPreEndOfGameGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPreEndOfGameGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolPreEndOfGameGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolPreEndOfGameGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPreEndOfGameGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolPreEndOfGameGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPreEndOfGameGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolPreEndOfGameGameflowPhase_HPP
