#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowPhase_t& v) {
    switch(v) {
      case LolLobbyGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolLobbyGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolLobbyGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolLobbyGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolLobbyGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolLobbyGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolLobbyGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolLobbyGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolLobbyGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolLobbyGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolLobbyGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolLobbyGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolLobbyGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolLobbyGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "WaitingForStats"){
      v = LolLobbyGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "Lobby"){
      v = LolLobbyGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolLobbyGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLobbyGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "None"){
      v = LolLobbyGameflowPhase_t::None_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolLobbyGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLobbyGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLobbyGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLobbyGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLobbyGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "InProgress"){
      v = LolLobbyGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolLobbyGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLobbyGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "GameStart"){
      v = LolLobbyGameflowPhase_t::GameStart_E;
      return;
    }
  }
}
