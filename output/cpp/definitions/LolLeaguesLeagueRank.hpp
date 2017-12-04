#ifndef SWAGGER_TYPES_LolLeaguesLeagueRank_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueRank_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesLeagueRank {
    // 
    I = 0,
    // 
    NA = 5,
    // 
    IV = 3,
    // 
    II = 1,
    // 
    V = 4,
    // 
    III = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueRank& v) {
    switch(v) {
      case LolLeaguesLeagueRank::I:
        j = "I";
      break;
      case LolLeaguesLeagueRank::NA:
        j = "NA";
      break;
      case LolLeaguesLeagueRank::IV:
        j = "IV";
      break;
      case LolLeaguesLeagueRank::II:
        j = "II";
      break;
      case LolLeaguesLeagueRank::V:
        j = "V";
      break;
      case LolLeaguesLeagueRank::III:
        j = "III";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueRank& v) {
    const auto& s = j.get<std::string>();
    if(s == "I"){
      v = LolLeaguesLeagueRank::I;
      return;
    }
    if(s == "NA"){
      v = LolLeaguesLeagueRank::NA;
      return;
    }
    if(s == "IV"){
      v = LolLeaguesLeagueRank::IV;
      return;
    }
    if(s == "II"){
      v = LolLeaguesLeagueRank::II;
      return;
    }
    if(s == "V"){
      v = LolLeaguesLeagueRank::V;
      return;
    }
    if(s == "III"){
      v = LolLeaguesLeagueRank::III;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueRank_HPP
