#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLootGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolLootGameflowPhase_t& v) {
    switch(v) {
      case LolLootGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolLootGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolLootGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolLootGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolLootGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolLootGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolLootGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolLootGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolLootGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolLootGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolLootGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolLootGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolLootGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolLootGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolLootGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolLootGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLootGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLootGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "GameStart"){
      v = LolLootGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "InProgress"){
      v = LolLootGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Lobby"){
      v = LolLootGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLootGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "None"){
      v = LolLootGameflowPhase_t::None_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLootGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLootGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolLootGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLootGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLootGameflowPhase_t::WaitingForStats_E;
      return;
    }
  }
}
