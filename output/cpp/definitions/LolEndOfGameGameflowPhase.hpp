#ifndef SWAGGER_TYPES_LolEndOfGameGameflowPhase_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolEndOfGameGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowPhase& v) {
    switch(v) {
      case LolEndOfGameGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolEndOfGameGameflowPhase::None:
        j = "None";
      break;
      case LolEndOfGameGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolEndOfGameGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolEndOfGameGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolEndOfGameGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolEndOfGameGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolEndOfGameGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolEndOfGameGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolEndOfGameGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolEndOfGameGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolEndOfGameGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolEndOfGameGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolEndOfGameGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolEndOfGameGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolEndOfGameGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolEndOfGameGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolEndOfGameGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolEndOfGameGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolEndOfGameGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolEndOfGameGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolEndOfGameGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolEndOfGameGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolEndOfGameGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolEndOfGameGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolEndOfGameGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowPhase_HPP
