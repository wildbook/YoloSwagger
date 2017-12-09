#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPreEndOfGameGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolPreEndOfGameGameflowPhase_t& v) {
    switch(v) {
      case LolPreEndOfGameGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolPreEndOfGameGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolPreEndOfGameGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolPreEndOfGameGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolPreEndOfGameGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolPreEndOfGameGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolPreEndOfGameGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolPreEndOfGameGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolPreEndOfGameGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolPreEndOfGameGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolPreEndOfGameGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolPreEndOfGameGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolPreEndOfGameGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolPreEndOfGameGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPreEndOfGameGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Lobby"){
      v = LolPreEndOfGameGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPreEndOfGameGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolPreEndOfGameGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPreEndOfGameGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "InProgress"){
      v = LolPreEndOfGameGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPreEndOfGameGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolPreEndOfGameGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolPreEndOfGameGameflowPhase_t::None_E;
      return;
    }
    if(s == "GameStart"){
      v = LolPreEndOfGameGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPreEndOfGameGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPreEndOfGameGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolPreEndOfGameGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPreEndOfGameGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPreEndOfGameGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolPreEndOfGameGameflowPhase_t& v) {
    switch(v) {
      case LolPreEndOfGameGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolPreEndOfGameGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolPreEndOfGameGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolPreEndOfGameGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolPreEndOfGameGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolPreEndOfGameGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolPreEndOfGameGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolPreEndOfGameGameflowPhase_t::None_E:
        return "None";
      case LolPreEndOfGameGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolPreEndOfGameGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolPreEndOfGameGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolPreEndOfGameGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolPreEndOfGameGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolPreEndOfGameGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
