#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsGameflowPhase_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsGameflowPhase_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolEsportStreamNotificationsGameflowPhase {
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

  void to_json(nlohmann::json& j, const LolEsportStreamNotificationsGameflowPhase& v) {
    switch(v) {
      case LolEsportStreamNotificationsGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolEsportStreamNotificationsGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolEsportStreamNotificationsGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolEsportStreamNotificationsGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolEsportStreamNotificationsGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolEsportStreamNotificationsGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolEsportStreamNotificationsGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolEsportStreamNotificationsGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolEsportStreamNotificationsGameflowPhase::None:
        j = "None";
      break;
      case LolEsportStreamNotificationsGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolEsportStreamNotificationsGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolEsportStreamNotificationsGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolEsportStreamNotificationsGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolEsportStreamNotificationsGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolEsportStreamNotificationsGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolEsportStreamNotificationsGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolEsportStreamNotificationsGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolEsportStreamNotificationsGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolEsportStreamNotificationsGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolEsportStreamNotificationsGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolEsportStreamNotificationsGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolEsportStreamNotificationsGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolEsportStreamNotificationsGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolEsportStreamNotificationsGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolEsportStreamNotificationsGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolEsportStreamNotificationsGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolEsportStreamNotificationsGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolEsportStreamNotificationsGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolEsportStreamNotificationsGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsGameflowPhase_HPP
