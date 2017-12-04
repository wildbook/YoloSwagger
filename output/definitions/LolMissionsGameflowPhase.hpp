#ifndef SWAGGER_TYPES_LolMissionsGameflowPhase_HPP
#define SWAGGER_TYPES_LolMissionsGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMissionsGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolMissionsGameflowPhase& v) {
    switch(v) {
      case LolMissionsGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolMissionsGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolMissionsGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolMissionsGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolMissionsGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolMissionsGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolMissionsGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolMissionsGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolMissionsGameflowPhase::None:
        j = "None";
      break;
      case LolMissionsGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolMissionsGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolMissionsGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolMissionsGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolMissionsGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMissionsGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolMissionsGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolMissionsGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolMissionsGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolMissionsGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolMissionsGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolMissionsGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolMissionsGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolMissionsGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolMissionsGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolMissionsGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolMissionsGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolMissionsGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolMissionsGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolMissionsGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMissionsGameflowPhase_HPP
