#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolFeaturedModesGameflowPhase_t {
    CheckedIntoTournament_E = 3,
    None_E = 0,
    EndOfGame_E = 12,
    ChampSelect_E = 5,
    FailedToLaunch_E = 7,
    WaitingForStats_E = 10,
    TerminatedInError_E = 13,
    Reconnect_E = 9,
    GameStart_E = 6,
    ReadyCheck_E = 4,
    InProgress_E = 8,
    PreEndOfGame_E = 11,
    Lobby_E = 1,
    Matchmaking_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesGameflowPhase_t& v) {
    switch(v) {
      case LolFeaturedModesGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolFeaturedModesGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolFeaturedModesGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolFeaturedModesGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolFeaturedModesGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolFeaturedModesGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolFeaturedModesGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolFeaturedModesGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolFeaturedModesGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolFeaturedModesGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolFeaturedModesGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolFeaturedModesGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolFeaturedModesGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolFeaturedModesGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolFeaturedModesGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolFeaturedModesGameflowPhase_t::None_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolFeaturedModesGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolFeaturedModesGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolFeaturedModesGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolFeaturedModesGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolFeaturedModesGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolFeaturedModesGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "GameStart"){
      v = LolFeaturedModesGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolFeaturedModesGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "InProgress"){
      v = LolFeaturedModesGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolFeaturedModesGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Lobby"){
      v = LolFeaturedModesGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolFeaturedModesGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolFeaturedModesGameflowPhase_t& v) {
    switch(v) {
      case LolFeaturedModesGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolFeaturedModesGameflowPhase_t::None_E:
        return "None";
      case LolFeaturedModesGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolFeaturedModesGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolFeaturedModesGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolFeaturedModesGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolFeaturedModesGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolFeaturedModesGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolFeaturedModesGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolFeaturedModesGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolFeaturedModesGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolFeaturedModesGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolFeaturedModesGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolFeaturedModesGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
