#ifndef SWAGGER_TYPES_LolClashTournamentState_HPP
#define SWAGGER_TYPES_LolClashTournamentState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashTournamentState {
    // 
    IN_GAME = 3,
    // 
    IDLE = 0,
    // 
    LOCK_IN = 1,
    // 
    SCOUTING = 2,
    // 
    RESULTS = 4,
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentState& v) {
    switch(v) {
      case LolClashTournamentState::IN_GAME:
        j = "IN_GAME";
      break;
      case LolClashTournamentState::IDLE:
        j = "IDLE";
      break;
      case LolClashTournamentState::LOCK_IN:
        j = "LOCK_IN";
      break;
      case LolClashTournamentState::SCOUTING:
        j = "SCOUTING";
      break;
      case LolClashTournamentState::RESULTS:
        j = "RESULTS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentState& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_GAME"){
      v = LolClashTournamentState::IN_GAME;
      return;
    }
    if(s == "IDLE"){
      v = LolClashTournamentState::IDLE;
      return;
    }
    if(s == "LOCK_IN"){
      v = LolClashTournamentState::LOCK_IN;
      return;
    }
    if(s == "SCOUTING"){
      v = LolClashTournamentState::SCOUTING;
      return;
    }
    if(s == "RESULTS"){
      v = LolClashTournamentState::RESULTS;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentState_HPP
