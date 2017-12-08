#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPftGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolPftGameflowPhase_t& v) {
    switch(v) {
      case LolPftGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolPftGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolPftGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolPftGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolPftGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolPftGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolPftGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolPftGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolPftGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolPftGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolPftGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolPftGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolPftGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolPftGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolPftGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolPftGameflowPhase_t::None_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPftGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolPftGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPftGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPftGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPftGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolPftGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "GameStart"){
      v = LolPftGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPftGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "InProgress"){
      v = LolPftGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPftGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Lobby"){
      v = LolPftGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPftGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolPftGameflowPhase_t& v) {
    switch(v) {
      case LolPftGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolPftGameflowPhase_t::None_E:
        return "None";
      case LolPftGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolPftGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolPftGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolPftGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolPftGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolPftGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolPftGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolPftGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolPftGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolPftGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolPftGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolPftGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
