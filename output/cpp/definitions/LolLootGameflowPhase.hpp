#ifndef SWAGGER_TYPES_LolLootGameflowPhase_HPP
#define SWAGGER_TYPES_LolLootGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLootGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolLootGameflowPhase& v) {
    switch(v) {
      case LolLootGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolLootGameflowPhase::None:
        j = "None";
      break;
      case LolLootGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolLootGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolLootGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolLootGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolLootGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolLootGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolLootGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolLootGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolLootGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolLootGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolLootGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolLootGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolLootGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolLootGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLootGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolLootGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLootGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLootGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLootGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolLootGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolLootGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLootGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolLootGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLootGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolLootGameflowPhase_HPP
