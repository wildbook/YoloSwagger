#ifndef SWAGGER_TYPES_LolChatGameflowPhase_HPP
#define SWAGGER_TYPES_LolChatGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolChatGameflowPhase& v) {
    switch(v) {
      case LolChatGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolChatGameflowPhase::None:
        j = "None";
      break;
      case LolChatGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolChatGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolChatGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolChatGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolChatGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolChatGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolChatGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolChatGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolChatGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolChatGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolChatGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolChatGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolChatGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolChatGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolChatGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolChatGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolChatGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolChatGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolChatGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolChatGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolChatGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolChatGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolChatGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolChatGameflowPhase::PreEndOfGame;
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
  }

}
#endif // SWAGGER_TYPES_LolChatGameflowPhase_HPP
