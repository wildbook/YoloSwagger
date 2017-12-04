#ifndef SWAGGER_TYPES_LolLeaguesLeagueRank_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueRank_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLeaguesLeagueRank {
'    // 
    I = 0,
    // 
    II = 1,
    // 
    III = 2,
    // 
    IV = 3,
    // 
    NA = 5,
    // 
    V = 4,
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeagueRank& v) {
    switch(v) {
      case LolLeaguesLeagueRank::I:
        j = "I";
      break;
      case LolLeaguesLeagueRank::II:
        j = "II";
      break;
      case LolLeaguesLeagueRank::III:
        j = "III";
      break;
      case LolLeaguesLeagueRank::IV:
        j = "IV";
      break;
      case LolLeaguesLeagueRank::NA:
        j = "NA";
      break;
      case LolLeaguesLeagueRank::V:
        j = "V";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeagueRank& v) {
    const auto s& = j.get<std::string>();
    if(s == "I"){
      v = LolLeaguesLeagueRank::I;
      return;
    }
    if(s == "II"){
      v = LolLeaguesLeagueRank::II;
      return;
    }
    if(s == "III"){
      v = LolLeaguesLeagueRank::III;
      return;
    }
    if(s == "IV"){
      v = LolLeaguesLeagueRank::IV;
      return;
    }
    if(s == "NA"){
      v = LolLeaguesLeagueRank::NA;
      return;
    }
    if(s == "V"){
      v = LolLeaguesLeagueRank::V;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueRank_HPP
