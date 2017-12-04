#ifndef SWAGGER_TYPES_LolLobbyGameflowPhase_HPP
#define SWAGGER_TYPES_LolLobbyGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowPhase& v) {
    switch(v) {
      case LolLobbyGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolLobbyGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolLobbyGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolLobbyGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolLobbyGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolLobbyGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolLobbyGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolLobbyGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolLobbyGameflowPhase::None:
        j = "None";
      break;
      case LolLobbyGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolLobbyGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolLobbyGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolLobbyGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolLobbyGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolLobbyGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolLobbyGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLobbyGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLobbyGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolLobbyGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolLobbyGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolLobbyGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLobbyGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolLobbyGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLobbyGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLobbyGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolLobbyGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLobbyGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLobbyGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameflowPhase_HPP
