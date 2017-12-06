#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolEsportStreamNotificationsGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsGameflowPhase_t& v) {
    switch(v) {
      case LolEsportStreamNotificationsGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolEsportStreamNotificationsGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ChampSelect"){
      v = LolEsportStreamNotificationsGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolEsportStreamNotificationsGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolEsportStreamNotificationsGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolEsportStreamNotificationsGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "GameStart"){
      v = LolEsportStreamNotificationsGameflowPhase_t::GameStart_E;
      return;
    }
    if(s == "InProgress"){
      v = LolEsportStreamNotificationsGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Lobby"){
      v = LolEsportStreamNotificationsGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolEsportStreamNotificationsGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "None"){
      v = LolEsportStreamNotificationsGameflowPhase_t::None_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolEsportStreamNotificationsGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolEsportStreamNotificationsGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolEsportStreamNotificationsGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolEsportStreamNotificationsGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "WaitingForStats"){
      v = LolEsportStreamNotificationsGameflowPhase_t::WaitingForStats_E;
      return;
    }
  }
}
