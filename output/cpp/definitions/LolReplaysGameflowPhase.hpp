#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolReplaysGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowPhase_t& v) {
    switch(v) {
      case LolReplaysGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolReplaysGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolReplaysGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolReplaysGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolReplaysGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolReplaysGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolReplaysGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolReplaysGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolReplaysGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolReplaysGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolReplaysGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolReplaysGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolReplaysGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolReplaysGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "WaitingForStats"){
      v = LolReplaysGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "Lobby"){
      v = LolReplaysGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolReplaysGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolReplaysGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "None"){
      v = LolReplaysGameflowPhase_t::None_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolReplaysGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolReplaysGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolReplaysGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolReplaysGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolReplaysGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "InProgress"){
      v = LolReplaysGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolReplaysGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolReplaysGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "GameStart"){
      v = LolReplaysGameflowPhase_t::GameStart_E;
      return;
    }
  }
}
