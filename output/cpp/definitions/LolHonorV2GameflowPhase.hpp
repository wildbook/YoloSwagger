#ifndef SWAGGER_TYPES_LolHonorV2GameflowPhase_HPP
#define SWAGGER_TYPES_LolHonorV2GameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolHonorV2GameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolHonorV2GameflowPhase& v) {
    switch(v) {
      case LolHonorV2GameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolHonorV2GameflowPhase::None:
        j = "None";
      break;
      case LolHonorV2GameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolHonorV2GameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolHonorV2GameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolHonorV2GameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolHonorV2GameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolHonorV2GameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolHonorV2GameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolHonorV2GameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolHonorV2GameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolHonorV2GameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolHonorV2GameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolHonorV2GameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2GameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolHonorV2GameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolHonorV2GameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolHonorV2GameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolHonorV2GameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolHonorV2GameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolHonorV2GameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolHonorV2GameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolHonorV2GameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolHonorV2GameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolHonorV2GameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolHonorV2GameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolHonorV2GameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "Lobby"){
      v = LolHonorV2GameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolHonorV2GameflowPhase::Matchmaking;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolHonorV2GameflowPhase_HPP