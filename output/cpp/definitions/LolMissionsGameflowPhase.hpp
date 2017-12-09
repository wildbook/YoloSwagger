#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMissionsGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolMissionsGameflowPhase_t& v) {
    switch(v) {
      case LolMissionsGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolMissionsGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolMissionsGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolMissionsGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolMissionsGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolMissionsGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolMissionsGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolMissionsGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolMissionsGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolMissionsGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolMissionsGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolMissionsGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolMissionsGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolMissionsGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMissionsGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Lobby"){
      v = LolMissionsGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolMissionsGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolMissionsGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolMissionsGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "InProgress"){
      v = LolMissionsGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolMissionsGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolMissionsGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "None"){
      v = LolMissionsGameflowPhase_t::None_E;
      return;
    }
    if(s == "GameStart"){
      v = LolMissionsGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolMissionsGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolMissionsGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolMissionsGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolMissionsGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolMissionsGameflowPhase_t::Matchmaking_E;
      return;
    }
  }
  inline std::string to_string(const LolMissionsGameflowPhase_t& v) {
    switch(v) {
      case LolMissionsGameflowPhase_t::Lobby_E:
        return "Lobby";
      case LolMissionsGameflowPhase_t::WaitingForStats_E:
        return "WaitingForStats";
      case LolMissionsGameflowPhase_t::ChampSelect_E:
        return "ChampSelect";
      case LolMissionsGameflowPhase_t::PreEndOfGame_E:
        return "PreEndOfGame";
      case LolMissionsGameflowPhase_t::InProgress_E:
        return "InProgress";
      case LolMissionsGameflowPhase_t::EndOfGame_E:
        return "EndOfGame";
      case LolMissionsGameflowPhase_t::CheckedIntoTournament_E:
        return "CheckedIntoTournament";
      case LolMissionsGameflowPhase_t::None_E:
        return "None";
      case LolMissionsGameflowPhase_t::GameStart_E:
        return "GameStart";
      case LolMissionsGameflowPhase_t::FailedToLaunch_E:
        return "FailedToLaunch";
      case LolMissionsGameflowPhase_t::ReadyCheck_E:
        return "ReadyCheck";
      case LolMissionsGameflowPhase_t::Reconnect_E:
        return "Reconnect";
      case LolMissionsGameflowPhase_t::TerminatedInError_E:
        return "TerminatedInError";
      case LolMissionsGameflowPhase_t::Matchmaking_E:
        return "Matchmaking";
    }
  }

}
