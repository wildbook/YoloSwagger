#ifndef SWAGGER_TYPES_LolLeaguesLeagueEmblem_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueEmblem_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesLeagueEmblem {
    // 
    VETERAN = 0,
    // 
    HOTSTREAK = 1,
    // 
    FRESHBLOOD = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueEmblem& v) {
    switch(v) {
      case LolLeaguesLeagueEmblem::VETERAN:
        j = "VETERAN";
      break;
      case LolLeaguesLeagueEmblem::HOTSTREAK:
        j = "HOTSTREAK";
      break;
      case LolLeaguesLeagueEmblem::FRESHBLOOD:
        j = "FRESHBLOOD";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueEmblem& v) {
    const auto& s = j.get<std::string>();
    if(s == "VETERAN"){
      v = LolLeaguesLeagueEmblem::VETERAN;
      return;
    }
    if(s == "HOTSTREAK"){
      v = LolLeaguesLeagueEmblem::HOTSTREAK;
      return;
    }
    if(s == "FRESHBLOOD"){
      v = LolLeaguesLeagueEmblem::FRESHBLOOD;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueEmblem_HPP
