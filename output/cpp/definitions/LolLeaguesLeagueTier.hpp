#ifndef SWAGGER_TYPES_LolLeaguesLeagueTier_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueTier_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesLeagueTier {
    // 
    PLATINUM = 4,
    // 
    NONE = 0,
    // 
    DIAMOND = 5,
    // 
    GOLD = 3,
    // 
    CHALLENGER = 7,
    // 
    MASTER = 6,
    // 
    SILVER = 2,
    // 
    BRONZE = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTier& v) {
    switch(v) {
      case LolLeaguesLeagueTier::PLATINUM:
        j = "PLATINUM";
      break;
      case LolLeaguesLeagueTier::NONE:
        j = "NONE";
      break;
      case LolLeaguesLeagueTier::DIAMOND:
        j = "DIAMOND";
      break;
      case LolLeaguesLeagueTier::GOLD:
        j = "GOLD";
      break;
      case LolLeaguesLeagueTier::CHALLENGER:
        j = "CHALLENGER";
      break;
      case LolLeaguesLeagueTier::MASTER:
        j = "MASTER";
      break;
      case LolLeaguesLeagueTier::SILVER:
        j = "SILVER";
      break;
      case LolLeaguesLeagueTier::BRONZE:
        j = "BRONZE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTier& v) {
    const auto& s = j.get<std::string>();
    if(s == "PLATINUM"){
      v = LolLeaguesLeagueTier::PLATINUM;
      return;
    }
    if(s == "NONE"){
      v = LolLeaguesLeagueTier::NONE;
      return;
    }
    if(s == "DIAMOND"){
      v = LolLeaguesLeagueTier::DIAMOND;
      return;
    }
    if(s == "GOLD"){
      v = LolLeaguesLeagueTier::GOLD;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolLeaguesLeagueTier::CHALLENGER;
      return;
    }
    if(s == "MASTER"){
      v = LolLeaguesLeagueTier::MASTER;
      return;
    }
    if(s == "SILVER"){
      v = LolLeaguesLeagueTier::SILVER;
      return;
    }
    if(s == "BRONZE"){
      v = LolLeaguesLeagueTier::BRONZE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueTier_HPP
