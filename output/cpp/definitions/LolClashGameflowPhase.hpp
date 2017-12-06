#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashGameflowPhase_t {
    ChampSelect_E = 5,
    CheckedIntoTournament_E = 3,
    EndOfGame_E = 12,
    FailedToLaunch_E = 7,
    GameStart_E = 6,
    InProgress_E = 8,
    Lobby_E = 1,
    Matchmaking_E = 2,
    None_E = 0,
    PreEndOfGame_E = 11,
    ReadyCheck_E = 4,
    Reconnect_E = 9,
    TerminatedInError_E = 13,
    WaitingForStats_E = 10,
  };

  inline void to_json(nlohmann::json& j, const LolClashGameflowPhase_t& v) {
    switch(v) {
      case LolClashGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolClashGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolClashGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolClashGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolClashGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolClashGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolClashGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolClashGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolClashGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolClashGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolClashGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolClashGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolClashGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolClashGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolClashGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolClashGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolClashGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolClashGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "GameStart"){
      v = LolClashGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "InProgress"){
      v = LolClashGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Lobby"){
      v = LolClashGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolClashGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "None"){
      v = LolClashGameflowPhase_t::None_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolClashGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolClashGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolClashGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolClashGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolClashGameflowPhase_t::WaitingForStats_E;
      return;
    }
  }
}
