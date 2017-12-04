#ifndef SWAGGER_TYPES_LolPerksGameflowPhase_HPP
#define SWAGGER_TYPES_LolPerksGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPerksGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolPerksGameflowPhase& v) {
    switch(v) {
      case LolPerksGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolPerksGameflowPhase::None:
        j = "None";
      break;
      case LolPerksGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolPerksGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolPerksGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolPerksGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolPerksGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolPerksGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolPerksGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolPerksGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolPerksGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolPerksGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolPerksGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolPerksGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolPerksGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolPerksGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPerksGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolPerksGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPerksGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPerksGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPerksGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolPerksGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolPerksGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPerksGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolPerksGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPerksGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolPerksGameflowPhase_HPP
