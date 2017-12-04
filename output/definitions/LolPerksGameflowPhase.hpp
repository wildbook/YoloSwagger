#ifndef SWAGGER_TYPES_LolPerksGameflowPhase_HPP
#define SWAGGER_TYPES_LolPerksGameflowPhase_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolPerksGameflowPhase {
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

  void to_json(nlohmann::json& j, const LolPerksGameflowPhase& v) {
    switch(v) {
      case LolPerksGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolPerksGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolPerksGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolPerksGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolPerksGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolPerksGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolPerksGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolPerksGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolPerksGameflowPhase::None:
        j = "None";
      break;
      case LolPerksGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolPerksGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolPerksGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolPerksGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolPerksGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolPerksGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolPerksGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolPerksGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPerksGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPerksGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolPerksGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolPerksGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolPerksGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPerksGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolPerksGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPerksGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPerksGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolPerksGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPerksGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPerksGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPerksGameflowPhase_HPP
