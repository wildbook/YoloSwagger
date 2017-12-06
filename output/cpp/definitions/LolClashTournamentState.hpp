#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashTournamentState_t {
    IDLE_E = 0,
    IN_GAME_E = 3,
    LOCK_IN_E = 1,
    RESULTS_E = 4,
    SCOUTING_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentState_t& v) {
    switch(v) {
      case LolClashTournamentState_t::IDLE_E:
        j = "IDLE";
      break;
      case LolClashTournamentState_t::IN_GAME_E:
        j = "IN_GAME";
      break;
      case LolClashTournamentState_t::LOCK_IN_E:
        j = "LOCK_IN";
      break;
      case LolClashTournamentState_t::RESULTS_E:
        j = "RESULTS";
      break;
      case LolClashTournamentState_t::SCOUTING_E:
        j = "SCOUTING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IDLE"){
      v = LolClashTournamentState_t::IDLE_E;
      return;
    }
    if(s == "IN_GAME"){
      v = LolClashTournamentState_t::IN_GAME_E;
      return;
    }
    if(s == "LOCK_IN"){
      v = LolClashTournamentState_t::LOCK_IN_E;
      return;
    }
    if(s == "RESULTS"){
      v = LolClashTournamentState_t::RESULTS_E;
      return;
    }
    if(s == "SCOUTING"){
      v = LolClashTournamentState_t::SCOUTING_E;
      return;
    }
  }
}
