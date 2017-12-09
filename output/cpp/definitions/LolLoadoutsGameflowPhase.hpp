#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLoadoutsGameflowPhase_t {
    Lobby_E = 1,
    WaitingForStats_E = 10,
    ChampSelect_E = 5,
    PreEndOfGame_E = 11,
    InProgress_E = 8,
    EndOfGame_E = 12,
    CheckedIntoTournament_E = 3,
    None_E = 0,
    GameStart_E = 6,
    FailedToLaunch_E = 7,
    ReadyCheck_E = 4,
    Reconnect_E = 9,
    TerminatedInError_E = 13,
    Matchmaking_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowPhase_t& v) {
    switch(v) {
      case LolLoadoutsGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolLoadoutsGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolLoadoutsGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolLoadoutsGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolLoadoutsGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolLoadoutsGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolLoadoutsGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolLoadoutsGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolLoadoutsGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolLoadoutsGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolLoadoutsGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolLoadoutsGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolLoadoutsGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolLoadoutsGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Lobby"){
      v = LolLoadoutsGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLoadoutsGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolLoadoutsGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLoadoutsGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "InProgress"){
      v = LolLoadoutsGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLoadoutsGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolLoadoutsGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolLoadoutsGameflowPhase_t::None_E;
      return;
    }
    if(s == "GameStart"){
      v = LolLoadoutsGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLoadoutsGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLoadoutsGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolLoadoutsGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLoadoutsGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLoadoutsGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolLoadoutsGameflowPhase_t& v) {
    switch(v) {
      case LolLoadoutsGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolLoadoutsGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolLoadoutsGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolLoadoutsGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolLoadoutsGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolLoadoutsGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolLoadoutsGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolLoadoutsGameflowPhase_t::None_E:
        return "None";
      case LolLoadoutsGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolLoadoutsGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolLoadoutsGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolLoadoutsGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolLoadoutsGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolLoadoutsGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
