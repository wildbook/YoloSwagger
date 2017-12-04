#ifndef SWAGGER_TYPES_LolLeaguesLeagueTier_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueTier_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLeaguesLeagueTier {
'    // 
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
    NONE = 0,
    // 
    PLATINUM = 4,
    // 
    SILVER = 2,
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeagueTier& v) {
    switch(v) {
      case LolLeaguesLeagueTier::BRONZE:
        j = "BRONZE";
      break;
      case LolLeaguesLeagueTier::CHALLENGER:
        j = "CHALLENGER";
      break;
      case LolLeaguesLeagueTier::DIAMOND:
        j = "DIAMOND";
      break;
      case LolLeaguesLeagueTier::GOLD:
        j = "GOLD";
      break;
      case LolLeaguesLeagueTier::MASTER:
        j = "MASTER";
      break;
      case LolLeaguesLeagueTier::NONE:
        j = "NONE";
      break;
      case LolLeaguesLeagueTier::PLATINUM:
        j = "PLATINUM";
      break;
      case LolLeaguesLeagueTier::SILVER:
        j = "SILVER";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeagueTier& v) {
    const auto s& = j.get<std::string>();
    if(s == "BRONZE"){
      v = LolLeaguesLeagueTier::BRONZE;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolLeaguesLeagueTier::CHALLENGER;
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
    if(s == "MASTER"){
      v = LolLeaguesLeagueTier::MASTER;
      return;
    }
    if(s == "NONE"){
      v = LolLeaguesLeagueTier::NONE;
      return;
    }
    if(s == "PLATINUM"){
      v = LolLeaguesLeagueTier::PLATINUM;
      return;
    }
    if(s == "SILVER"){
      v = LolLeaguesLeagueTier::SILVER;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueTier_HPP
