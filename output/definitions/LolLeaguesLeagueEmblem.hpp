#ifndef SWAGGER_TYPES_LolLeaguesLeagueEmblem_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueEmblem_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesLeagueEmblem {
    // 
    FRESHBLOOD = 2,
    // 
    HOTSTREAK = 1,
    // 
    VETERAN = 0,
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeagueEmblem& v) {
    switch(v) {
      case LolLeaguesLeagueEmblem::FRESHBLOOD:
        j = "FRESHBLOOD";
      break;
      case LolLeaguesLeagueEmblem::HOTSTREAK:
        j = "HOTSTREAK";
      break;
      case LolLeaguesLeagueEmblem::VETERAN:
        j = "VETERAN";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeagueEmblem& v) {
    const auto s& = j.get<std::string>();
    if(s == "FRESHBLOOD"){
      v = LolLeaguesLeagueEmblem::FRESHBLOOD;
      return;
    }
    if(s == "HOTSTREAK"){
      v = LolLeaguesLeagueEmblem::HOTSTREAK;
      return;
    }
    if(s == "VETERAN"){
      v = LolLeaguesLeagueEmblem::VETERAN;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueEmblem_HPP
