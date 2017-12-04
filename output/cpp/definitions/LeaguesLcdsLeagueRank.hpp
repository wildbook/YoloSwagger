#ifndef SWAGGER_TYPES_LeaguesLcdsLeagueRank_HPP
#define SWAGGER_TYPES_LeaguesLcdsLeagueRank_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LeaguesLcdsLeagueRank {
    // 
    I = 0,
    // 
    II = 1,
    // 
    V = 4,
    // 
    III = 2,
    // 
    IV = 3,
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueRank& v) {
    switch(v) {
      case LeaguesLcdsLeagueRank::I:
        j = "I";
      break;
      case LeaguesLcdsLeagueRank::II:
        j = "II";
      break;
      case LeaguesLcdsLeagueRank::V:
        j = "V";
      break;
      case LeaguesLcdsLeagueRank::III:
        j = "III";
      break;
      case LeaguesLcdsLeagueRank::IV:
        j = "IV";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueRank& v) {
    const auto& s = j.get<std::string>();
    if(s == "I"){
      v = LeaguesLcdsLeagueRank::I;
      return;
    }
    if(s == "II"){
      v = LeaguesLcdsLeagueRank::II;
      return;
    }
    if(s == "V"){
      v = LeaguesLcdsLeagueRank::V;
      return;
    }
    if(s == "III"){
      v = LeaguesLcdsLeagueRank::III;
      return;
    }
    if(s == "IV"){
      v = LeaguesLcdsLeagueRank::IV;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsLeagueRank_HPP
