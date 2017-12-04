#ifndef SWAGGER_TYPES_LolEndOfGameGameflowPhase_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowPhase_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolEndOfGameGameflowPhase {
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

  void to_json(nlohmann::json& j, const LolEndOfGameGameflowPhase& v) {
    switch(v) {
      case LolEndOfGameGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolEndOfGameGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolEndOfGameGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolEndOfGameGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolEndOfGameGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolEndOfGameGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolEndOfGameGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolEndOfGameGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolEndOfGameGameflowPhase::None:
        j = "None";
      break;
      case LolEndOfGameGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolEndOfGameGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolEndOfGameGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolEndOfGameGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolEndOfGameGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolEndOfGameGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolEndOfGameGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolEndOfGameGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolEndOfGameGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolEndOfGameGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolEndOfGameGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolEndOfGameGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolEndOfGameGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolEndOfGameGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolEndOfGameGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolEndOfGameGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolEndOfGameGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolEndOfGameGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolEndOfGameGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolEndOfGameGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowPhase_HPP
