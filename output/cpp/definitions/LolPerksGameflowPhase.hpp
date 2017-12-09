#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPerksGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolPerksGameflowPhase_t& v) {
    switch(v) {
      case LolPerksGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolPerksGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolPerksGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolPerksGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolPerksGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolPerksGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolPerksGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolPerksGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolPerksGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolPerksGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolPerksGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolPerksGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolPerksGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolPerksGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Lobby"){
      v = LolPerksGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolPerksGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolPerksGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolPerksGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "InProgress"){
      v = LolPerksGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolPerksGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolPerksGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolPerksGameflowPhase_t::None_E;
      return;
    }
    if(s == "GameStart"){
      v = LolPerksGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolPerksGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolPerksGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolPerksGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolPerksGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolPerksGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolPerksGameflowPhase_t& v) {
    switch(v) {
      case LolPerksGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolPerksGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolPerksGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolPerksGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolPerksGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolPerksGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolPerksGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolPerksGameflowPhase_t::None_E:
        return "None";
      case LolPerksGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolPerksGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolPerksGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolPerksGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolPerksGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolPerksGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
