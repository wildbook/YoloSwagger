#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsGameflowPhase_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolEsportStreamNotificationsGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsGameflowPhase& v) {
    switch(v) {
      case LolEsportStreamNotificationsGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolEsportStreamNotificationsGameflowPhase::None:
        j = "None";
      break;
      case LolEsportStreamNotificationsGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolEsportStreamNotificationsGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolEsportStreamNotificationsGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolEsportStreamNotificationsGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolEsportStreamNotificationsGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolEsportStreamNotificationsGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolEsportStreamNotificationsGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolEsportStreamNotificationsGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolEsportStreamNotificationsGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolEsportStreamNotificationsGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolEsportStreamNotificationsGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolEsportStreamNotificationsGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolEsportStreamNotificationsGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolEsportStreamNotificationsGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolEsportStreamNotificationsGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolEsportStreamNotificationsGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolEsportStreamNotificationsGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolEsportStreamNotificationsGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolEsportStreamNotificationsGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolEsportStreamNotificationsGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolEsportStreamNotificationsGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolEsportStreamNotificationsGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolEsportStreamNotificationsGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolEsportStreamNotificationsGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsGameflowPhase_HPP
