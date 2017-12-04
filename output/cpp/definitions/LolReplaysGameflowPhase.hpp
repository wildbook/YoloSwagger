#ifndef SWAGGER_TYPES_LolReplaysGameflowPhase_HPP
#define SWAGGER_TYPES_LolReplaysGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolReplaysGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowPhase& v) {
    switch(v) {
      case LolReplaysGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolReplaysGameflowPhase::None:
        j = "None";
      break;
      case LolReplaysGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolReplaysGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolReplaysGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolReplaysGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolReplaysGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolReplaysGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolReplaysGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolReplaysGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolReplaysGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolReplaysGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolReplaysGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolReplaysGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolReplaysGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolReplaysGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolReplaysGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolReplaysGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolReplaysGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolReplaysGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolReplaysGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolReplaysGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolReplaysGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolReplaysGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolReplaysGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolReplaysGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "Lobby"){
      v = LolReplaysGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolReplaysGameflowPhase::Matchmaking;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolReplaysGameflowPhase_HPP