#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLoadoutsGameflowPhase_t {
    WaitingForStats_E = 10,
    Lobby_E = 1,
    ChampSelect_E = 5,
    ReadyCheck_E = 4,
    None_E = 0,
    CheckedIntoTournament_E = 3,
    TerminatedInError_E = 13,
    FailedToLaunch_E = 7,
    PreEndOfGame_E = 11,
    Matchmaking_E = 2,
    InProgress_E = 8,
    Reconnect_E = 9,
    EndOfGame_E = 12,
    GameStart_E = 6,
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowPhase_t& v) {
    switch(v) {
      case LolLoadoutsGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolLoadoutsGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolLoadoutsGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolLoadoutsGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolLoadoutsGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolLoadoutsGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolLoadoutsGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolLoadoutsGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolLoadoutsGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolLoadoutsGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolLoadoutsGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolLoadoutsGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolLoadoutsGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolLoadoutsGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "WaitingForStats"){
      v = LolLoadoutsGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "Lobby"){
      v = LolLoadoutsGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolLoadoutsGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLoadoutsGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "None"){
      v = LolLoadoutsGameflowPhase_t::None_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolLoadoutsGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLoadoutsGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLoadoutsGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLoadoutsGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLoadoutsGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "InProgress"){
      v = LolLoadoutsGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolLoadoutsGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLoadoutsGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "GameStart"){
      v = LolLoadoutsGameflowPhase_t::GameStart_E;
      return;
    }
  }
}
