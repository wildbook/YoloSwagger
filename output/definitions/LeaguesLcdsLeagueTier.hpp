#ifndef SWAGGER_TYPES_LeaguesLcdsLeagueTier_HPP
#define SWAGGER_TYPES_LeaguesLcdsLeagueTier_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LeaguesLcdsLeagueTier {
    // 
    BRONZE = 1,
    // 
    CHALLENGER = 7,
    // 
    DIAMOND = 5,
    // 
    GOLD = 3,
    // 
    MASTER = 6,
    // 
    PLATINUM = 4,
    // 
    SILVER = 2,
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueTier& v) {
    switch(v) {
      case LeaguesLcdsLeagueTier::BRONZE:
        j = "BRONZE";
      break;
      case LeaguesLcdsLeagueTier::CHALLENGER:
        j = "CHALLENGER";
      break;
      case LeaguesLcdsLeagueTier::DIAMOND:
        j = "DIAMOND";
      break;
      case LeaguesLcdsLeagueTier::GOLD:
        j = "GOLD";
      break;
      case LeaguesLcdsLeagueTier::MASTER:
        j = "MASTER";
      break;
      case LeaguesLcdsLeagueTier::PLATINUM:
        j = "PLATINUM";
      break;
      case LeaguesLcdsLeagueTier::SILVER:
        j = "SILVER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueTier& v) {
    const auto s& = j.get<std::string>();
    if(s == "BRONZE"){
      v = LeaguesLcdsLeagueTier::BRONZE;
      return;
    }
    if(s == "CHALLENGER"){
      v = LeaguesLcdsLeagueTier::CHALLENGER;
      return;
    }
    if(s == "DIAMOND"){
      v = LeaguesLcdsLeagueTier::DIAMOND;
      return;
    }
    if(s == "GOLD"){
      v = LeaguesLcdsLeagueTier::GOLD;
      return;
    }
    if(s == "MASTER"){
      v = LeaguesLcdsLeagueTier::MASTER;
      return;
    }
    if(s == "PLATINUM"){
      v = LeaguesLcdsLeagueTier::PLATINUM;
      return;
    }
    if(s == "SILVER"){
      v = LeaguesLcdsLeagueTier::SILVER;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsLeagueTier_HPP
