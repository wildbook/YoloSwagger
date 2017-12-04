#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowPhase_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChampSelectLegacyGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowPhase& v) {
    switch(v) {
      case LolChampSelectLegacyGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolChampSelectLegacyGameflowPhase::None:
        j = "None";
      break;
      case LolChampSelectLegacyGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolChampSelectLegacyGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolChampSelectLegacyGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolChampSelectLegacyGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolChampSelectLegacyGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolChampSelectLegacyGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolChampSelectLegacyGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolChampSelectLegacyGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolChampSelectLegacyGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolChampSelectLegacyGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolChampSelectLegacyGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolChampSelectLegacyGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolChampSelectLegacyGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolChampSelectLegacyGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolChampSelectLegacyGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolChampSelectLegacyGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolChampSelectLegacyGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolChampSelectLegacyGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolChampSelectLegacyGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolChampSelectLegacyGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolChampSelectLegacyGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolChampSelectLegacyGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolChampSelectLegacyGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolChampSelectLegacyGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "Lobby"){
      v = LolChampSelectLegacyGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolChampSelectLegacyGameflowPhase::Matchmaking;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowPhase_HPP
