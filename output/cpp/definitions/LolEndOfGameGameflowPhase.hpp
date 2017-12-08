#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolEndOfGameGameflowPhase_t {
    Reconnect_E = 9,
    EndOfGame_E = 12,
    ChampSelect_E = 5,
    CheckedIntoTournament_E = 3,
    None_E = 0,
    PreEndOfGame_E = 11,
    WaitingForStats_E = 10,
    TerminatedInError_E = 13,
    ReadyCheck_E = 4,
    FailedToLaunch_E = 7,
    Matchmaking_E = 2,
    InProgress_E = 8,
    GameStart_E = 6,
    Lobby_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowPhase_t& v) {
    switch(v) {
      case LolEndOfGameGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolEndOfGameGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolEndOfGameGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolEndOfGameGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolEndOfGameGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolEndOfGameGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolEndOfGameGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolEndOfGameGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolEndOfGameGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolEndOfGameGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolEndOfGameGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolEndOfGameGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolEndOfGameGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolEndOfGameGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Reconnect"){
      v = LolEndOfGameGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolEndOfGameGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolEndOfGameGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolEndOfGameGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolEndOfGameGameflowPhase_t::None_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolEndOfGameGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolEndOfGameGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolEndOfGameGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolEndOfGameGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolEndOfGameGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolEndOfGameGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "InProgress"){
      v = LolEndOfGameGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "GameStart"){
      v = LolEndOfGameGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "Lobby"){
      v = LolEndOfGameGameflowPhase_t::Lobby_E;
      return;
    }
  }
  inline std::string to_string(const LolEndOfGameGameflowPhase_t& v) {
    switch(v) {
      case LolEndOfGameGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolEndOfGameGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolEndOfGameGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolEndOfGameGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolEndOfGameGameflowPhase_t::None_E:
        return "None";
      case LolEndOfGameGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolEndOfGameGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolEndOfGameGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolEndOfGameGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolEndOfGameGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolEndOfGameGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
      case LolEndOfGameGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolEndOfGameGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolEndOfGameGameflowPhase_t::Lobby_E:
        return "Lobby";
    }
  }

}
