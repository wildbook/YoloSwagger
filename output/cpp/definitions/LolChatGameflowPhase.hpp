#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatGameflowPhase_t {
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

  inline void to_json(nlohmann::json& j, const LolChatGameflowPhase_t& v) {
    switch(v) {
      case LolChatGameflowPhase_t::WaitingForStats_E:
        j = "WaitingForStats";
      break;
      case LolChatGameflowPhase_t::Lobby_E:
        j = "Lobby";
      break;
      case LolChatGameflowPhase_t::ChampSelect_E:
        j = "ChampSelect";
      break;
      case LolChatGameflowPhase_t::ReadyCheck_E:
        j = "ReadyCheck";
      break;
      case LolChatGameflowPhase_t::None_E:
        j = "None";
      break;
      case LolChatGameflowPhase_t::CheckedIntoTournament_E:
        j = "CheckedIntoTournament";
      break;
      case LolChatGameflowPhase_t::TerminatedInError_E:
        j = "TerminatedInError";
      break;
      case LolChatGameflowPhase_t::FailedToLaunch_E:
        j = "FailedToLaunch";
      break;
      case LolChatGameflowPhase_t::PreEndOfGame_E:
        j = "PreEndOfGame";
      break;
      case LolChatGameflowPhase_t::Matchmaking_E:
        j = "Matchmaking";
      break;
      case LolChatGameflowPhase_t::InProgress_E:
        j = "InProgress";
      break;
      case LolChatGameflowPhase_t::Reconnect_E:
        j = "Reconnect";
      break;
      case LolChatGameflowPhase_t::EndOfGame_E:
        j = "EndOfGame";
      break;
      case LolChatGameflowPhase_t::GameStart_E:
        j = "GameStart";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowPhase_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "WaitingForStats"){
      v = LolChatGameflowPhase_t::WaitingForStats_E;
      return;
    }
    if(s == "Lobby"){
      v = LolChatGameflowPhase_t::Lobby_E;
      return;
    }
    if(s == "ChampSelect"){
      v = LolChatGameflowPhase_t::ChampSelect_E;
      return;
    }
    if(s == "ReadyCheck"){
      v = LolChatGameflowPhase_t::ReadyCheck_E;
      return;
    }
    if(s == "None"){
      v = LolChatGameflowPhase_t::None_E;
      return;
    }
    if(s == "CheckedIntoTournament"){
      v = LolChatGameflowPhase_t::CheckedIntoTournament_E;
      return;
    }
    if(s == "TerminatedInError"){
      v = LolChatGameflowPhase_t::TerminatedInError_E;
      return;
    }
    if(s == "FailedToLaunch"){
      v = LolChatGameflowPhase_t::FailedToLaunch_E;
      return;
    }
    if(s == "PreEndOfGame"){
      v = LolChatGameflowPhase_t::PreEndOfGame_E;
      return;
    }
    if(s == "Matchmaking"){
      v = LolChatGameflowPhase_t::Matchmaking_E;
      return;
    }
    if(s == "InProgress"){
      v = LolChatGameflowPhase_t::InProgress_E;
      return;
    }
    if(s == "Reconnect"){
      v = LolChatGameflowPhase_t::Reconnect_E;
      return;
    }
    if(s == "EndOfGame"){
      v = LolChatGameflowPhase_t::EndOfGame_E;
      return;
    }
    if(s == "GameStart"){
      v = LolChatGameflowPhase_t::GameStart_E;
      return;
    }
  }
}
