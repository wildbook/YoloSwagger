#ifndef SWAGGER_TYPES_LolLootGameflowPhase_HPP
#define SWAGGER_TYPES_LolLootGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLootGameflowPhase {
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

  void to_json(nlohmann::json& j, const LolLootGameflowPhase& v) {
    switch(v) {
      case LolLootGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolLootGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolLootGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolLootGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolLootGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolLootGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolLootGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolLootGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolLootGameflowPhase::None:
        j = "None";
      break;
      case LolLootGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolLootGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolLootGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolLootGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolLootGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLootGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolLootGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolLootGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLootGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLootGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolLootGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolLootGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolLootGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLootGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolLootGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLootGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLootGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolLootGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLootGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLootGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootGameflowPhase_HPP
