#ifndef SWAGGER_TYPES_LolClashGameflowPhase_HPP
#define SWAGGER_TYPES_LolClashGameflowPhase_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolClashGameflowPhase {
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

  void to_json(nlohmann::json& j, const LolClashGameflowPhase& v) {
    switch(v) {
      case LolClashGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolClashGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolClashGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolClashGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolClashGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolClashGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolClashGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolClashGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolClashGameflowPhase::None:
        j = "None";
      break;
      case LolClashGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolClashGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolClashGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolClashGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolClashGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolClashGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolClashGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolClashGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolClashGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolClashGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolClashGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolClashGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolClashGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolClashGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolClashGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolClashGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolClashGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolClashGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolClashGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolClashGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashGameflowPhase_HPP
