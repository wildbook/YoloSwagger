#ifndef SWAGGER_TYPES_LolUserExperienceGameflowPhase_HPP
#define SWAGGER_TYPES_LolUserExperienceGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolUserExperienceGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolUserExperienceGameflowPhase& v) {
    switch(v) {
      case LolUserExperienceGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolUserExperienceGameflowPhase::None:
        j = "None";
      break;
      case LolUserExperienceGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolUserExperienceGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolUserExperienceGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolUserExperienceGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolUserExperienceGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolUserExperienceGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolUserExperienceGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolUserExperienceGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolUserExperienceGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolUserExperienceGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolUserExperienceGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolUserExperienceGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolUserExperienceGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolUserExperienceGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolUserExperienceGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolUserExperienceGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolUserExperienceGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolUserExperienceGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolUserExperienceGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolUserExperienceGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolUserExperienceGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolUserExperienceGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolUserExperienceGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolUserExperienceGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolUserExperienceGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "Lobby"){
      v = LolUserExperienceGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolUserExperienceGameflowPhase::Matchmaking;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolUserExperienceGameflowPhase_HPP
