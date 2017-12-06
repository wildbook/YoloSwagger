#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolLeaguesGameflowPhase_t& v) {
    switch(v) {
      case LolLeaguesGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolLeaguesGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolLeaguesGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolLeaguesGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolLeaguesGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolLeaguesGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolLeaguesGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolLeaguesGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolLeaguesGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolLeaguesGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolLeaguesGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolLeaguesGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolLeaguesGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolLeaguesGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolLeaguesGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolLeaguesGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolLeaguesGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolLeaguesGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "GameStart"){
      v = LolLeaguesGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "InProgress"){
      v = LolLeaguesGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Lobby"){
      v = LolLeaguesGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolLeaguesGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "None"){
      v = LolLeaguesGameflowPhase_t::None_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolLeaguesGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolLeaguesGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolLeaguesGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolLeaguesGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolLeaguesGameflowPhase_t::WaitingForStats_E;
      return;
    }
  }
}
