#ifndef SWAGGER_TYPES_LolMissionsGameflowPhase_HPP
#define SWAGGER_TYPES_LolMissionsGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMissionsGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolMissionsGameflowPhase& v) {
    switch(v) {
      case LolMissionsGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolMissionsGameflowPhase::None:
        j = "None";
      break;
      case LolMissionsGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolMissionsGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolMissionsGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolMissionsGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolMissionsGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolMissionsGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolMissionsGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolMissionsGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolMissionsGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolMissionsGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolMissionsGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolMissionsGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMissionsGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolMissionsGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolMissionsGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolMissionsGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolMissionsGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolMissionsGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolMissionsGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolMissionsGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolMissionsGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolMissionsGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolMissionsGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolMissionsGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolMissionsGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolMissionsGameflowPhase_HPP
