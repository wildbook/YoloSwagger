#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowPhase_t& v) {
    switch(v) {
      case LolChampSelectLegacyGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolChampSelectLegacyGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolChampSelectLegacyGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolChampSelectLegacyGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolChampSelectLegacyGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolChampSelectLegacyGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolChampSelectLegacyGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolChampSelectLegacyGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolChampSelectLegacyGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolChampSelectLegacyGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolChampSelectLegacyGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolChampSelectLegacyGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolChampSelectLegacyGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolChampSelectLegacyGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Reconnect"){
      v = LolChampSelectLegacyGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolChampSelectLegacyGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolChampSelectLegacyGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolChampSelectLegacyGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolChampSelectLegacyGameflowPhase_t::None_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolChampSelectLegacyGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolChampSelectLegacyGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolChampSelectLegacyGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolChampSelectLegacyGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolChampSelectLegacyGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolChampSelectLegacyGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "InProgress"){
      v = LolChampSelectLegacyGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "GameStart"){
      v = LolChampSelectLegacyGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "Lobby"){
      v = LolChampSelectLegacyGameflowPhase_t::Lobby_E;
      return;
    }
  }
  inline std::string to_string(const LolChampSelectLegacyGameflowPhase_t& v) {
    switch(v) {
      case LolChampSelectLegacyGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolChampSelectLegacyGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolChampSelectLegacyGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolChampSelectLegacyGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolChampSelectLegacyGameflowPhase_t::None_E:
        return "None";
      case LolChampSelectLegacyGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolChampSelectLegacyGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolChampSelectLegacyGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolChampSelectLegacyGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolChampSelectLegacyGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolChampSelectLegacyGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
      case LolChampSelectLegacyGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolChampSelectLegacyGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolChampSelectLegacyGameflowPhase_t::Lobby_E:
        return "Lobby";
    }
  }

}
