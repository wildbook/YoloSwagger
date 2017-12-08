#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolUserExperienceGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolUserExperienceGameflowPhase_t& v) {
    switch(v) {
      case LolUserExperienceGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolUserExperienceGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolUserExperienceGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolUserExperienceGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolUserExperienceGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolUserExperienceGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolUserExperienceGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolUserExperienceGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolUserExperienceGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolUserExperienceGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolUserExperienceGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolUserExperienceGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolUserExperienceGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolUserExperienceGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolUserExperienceGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckedIntoTournament"){
      v = LolUserExperienceGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolUserExperienceGameflowPhase_t::None_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolUserExperienceGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolUserExperienceGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolUserExperienceGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolUserExperienceGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolUserExperienceGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolUserExperienceGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "GameStart"){
      v = LolUserExperienceGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolUserExperienceGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "InProgress"){
      v = LolUserExperienceGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolUserExperienceGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Lobby"){
      v = LolUserExperienceGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolUserExperienceGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolUserExperienceGameflowPhase_t& v) {
    switch(v) {
      case LolUserExperienceGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolUserExperienceGameflowPhase_t::None_E:
        return "None";
      case LolUserExperienceGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolUserExperienceGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolUserExperienceGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolUserExperienceGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolUserExperienceGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolUserExperienceGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolUserExperienceGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolUserExperienceGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolUserExperienceGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolUserExperienceGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolUserExperienceGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolUserExperienceGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
