#ifndef SWAGGER_TYPES_LolFeaturedModesGameflowPhase_HPP
#define SWAGGER_TYPES_LolFeaturedModesGameflowPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolFeaturedModesGameflowPhase {
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

  inline void to_json(nlohmann::json& j, const LolFeaturedModesGameflowPhase& v) {
    switch(v) {
      case LolFeaturedModesGameflowPhase::CheckedIntoTournament:
        j = "CheckedIntoTournament";
      break;
      case LolFeaturedModesGameflowPhase::None:
        j = "None";
      break;
      case LolFeaturedModesGameflowPhase::EndOfGame:
        j = "EndOfGame";
      break;
      case LolFeaturedModesGameflowPhase::ChampSelect:
        j = "ChampSelect";
      break;
      case LolFeaturedModesGameflowPhase::FailedToLaunch:
        j = "FailedToLaunch";
      break;
      case LolFeaturedModesGameflowPhase::WaitingForStats:
        j = "WaitingForStats";
      break;
      case LolFeaturedModesGameflowPhase::TerminatedInError:
        j = "TerminatedInError";
      break;
      case LolFeaturedModesGameflowPhase::Reconnect:
        j = "Reconnect";
      break;
      case LolFeaturedModesGameflowPhase::GameStart:
        j = "GameStart";
      break;
      case LolFeaturedModesGameflowPhase::ReadyCheck:
        j = "ReadyCheck";
      break;
      case LolFeaturedModesGameflowPhase::InProgress:
        j = "InProgress";
      break;
      case LolFeaturedModesGameflowPhase::PreEndOfGame:
        j = "PreEndOfGame";
      break;
      case LolFeaturedModesGameflowPhase::Lobby:
        j = "Lobby";
      break;
      case LolFeaturedModesGameflowPhase::Matchmaking:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesGameflowPhase& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolFeaturedModesGameflowPhase::CheckedIntoTournament;
      return;
    }
    if(s == "None"){
      v = LolFeaturedModesGameflowPhase::None;
      return;
    }
    if(s == "EndOfGame"){
      v = LolFeaturedModesGameflowPhase::EndOfGame;
      return;
    }
    if(s == "ChampSelect"){
      v = LolFeaturedModesGameflowPhase::ChampSelect;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolFeaturedModesGameflowPhase::FailedToLaunch;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolFeaturedModesGameflowPhase::WaitingForStats;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolFeaturedModesGameflowPhase::TerminatedInError;
      return;
    }
    if(s == "Reconnect"){
      v = LolFeaturedModesGameflowPhase::Reconnect;
      return;
    }
    if(s == "GameStart"){
      v = LolFeaturedModesGameflowPhase::GameStart;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolFeaturedModesGameflowPhase::ReadyCheck;
      return;
    }
    if(s == "InProgress"){
      v = LolFeaturedModesGameflowPhase::InProgress;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolFeaturedModesGameflowPhase::PreEndOfGame;
      return;
    }
    if(s == "Lobby"){
      v = LolFeaturedModesGameflowPhase::Lobby;
      return;
    }
    if(s == "Matchmaking"){
      v = LolFeaturedModesGameflowPhase::Matchmaking;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesGameflowPhase_HPP
