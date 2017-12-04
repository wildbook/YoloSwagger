#ifndef SWAGGER_TYPES_LolClashTournamentState_HPP
#define SWAGGER_TYPES_LolClashTournamentState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashTournamentState {
    // 
    IDLE = 0,
    // 
    IN_GAME = 3,
    // 
    LOCK_IN = 1,
    // 
    RESULTS = 4,
    // 
    SCOUTING = 2,
  };

  void to_json(nlohmann::json& j, const LolClashTournamentState& v) {
    switch(v) {
      case LolClashTournamentState::IDLE:
        j = "IDLE";
      break;
      case LolClashTournamentState::IN_GAME:
        j = "IN_GAME";
      break;
      case LolClashTournamentState::LOCK_IN:
        j = "LOCK_IN";
      break;
      case LolClashTournamentState::RESULTS:
        j = "RESULTS";
      break;
      case LolClashTournamentState::SCOUTING:
        j = "SCOUTING";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolClashTournamentState& v) {
    const auto s& = j.get<std::string>();
    if(s == "IDLE"){
      v = LolClashTournamentState::IDLE;
      return;
    }
    if(s == "IN_GAME"){
      v = LolClashTournamentState::IN_GAME;
      return;
    }
    if(s == "LOCK_IN"){
      v = LolClashTournamentState::LOCK_IN;
      return;
    }
    if(s == "RESULTS"){
      v = LolClashTournamentState::RESULTS;
      return;
    }
    if(s == "SCOUTING"){
      v = LolClashTournamentState::SCOUTING;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentState_HPP
