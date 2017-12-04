#ifndef SWAGGER_TYPES_LolChatGameflowPhase_HPP
#define SWAGGER_TYPES_LolChatGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolChatGameflowPhase& v) {
    switch(v) {
      case LolChatGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolChatGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolChatGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolChatGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolChatGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolChatGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolChatGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolChatGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
      case LolChatGameflowPhase::None:
        j = "None";
      break;
      case LolChatGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolChatGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolChatGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolChatGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolChatGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowPhase& v) {
    const auto s& = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolChatGameflowPhase::ChampSelect;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolChatGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "EndOfGame"){
      v = LolChatGameflowPhase::EndOfGame;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolChatGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "GameStart"){
      v = LolChatGameflowPhase::GameStart;
      return;
    }
    if(s == "InProgress"){
      v = LolChatGameflowPhase::InProgress;
      return;
    }
    if(s == "Lobby"){
      v = LolChatGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolChatGameflowPhase::Matchmaking;
      return;
    }
    if(s == "None"){
      v = LolChatGameflowPhase::None;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolChatGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolChatGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "Reconnect"){
      v = LolChatGameflowPhase::Reconnect;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolChatGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolChatGameflowPhase::WaitingForStats;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatGameflowPhase_HPP
