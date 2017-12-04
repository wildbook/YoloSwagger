#ifndef SWAGGER_TYPES_LolLeaguesGameflowPhase_HPP
#define SWAGGER_TYPES_LolLeaguesGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolLeaguesGameflowPhase& v) {
    switch(v) {
      case LolLeaguesGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolLeaguesGameflowPhase::None:
        j = "None";
      break;
      case LolLeaguesGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolLeaguesGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolLeaguesGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolLeaguesGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolLeaguesGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolLeaguesGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolLeaguesGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolLeaguesGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolLeaguesGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolLeaguesGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolLeaguesGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolLeaguesGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolLeaguesGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolLeaguesGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLeaguesGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolLeaguesGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLeaguesGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLeaguesGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLeaguesGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolLeaguesGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolLeaguesGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLeaguesGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolLeaguesGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLeaguesGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "Lobby"){
      v = LolLeaguesGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLeaguesGameflowPhase::Matchmaking;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesGameflowPhase_HPP
