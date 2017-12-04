#ifndef SWAGGER_TYPES_LolLeaguesMiniseries_HPP
#define SWAGGER_TYPES_LolLeaguesMiniseries_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesMiniseries {
    // 
    L = 1,
    // 
    W = 0,
    // 
    N = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesMiniseries& v) {
    switch(v) {
      case LolLeaguesMiniseries::L:
        j = "L";
      break;
      case LolLeaguesMiniseries::W:
        j = "W";
      break;
      case LolLeaguesMiniseries::N:
        j = "N";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesMiniseries& v) {
    const auto& s = j.get<std::string>();
    if(s == "L"){
      v = LolLeaguesMiniseries::L;
      return;
    }
    if(s == "W"){
      v = LolLeaguesMiniseries::W;
      return;
    }
    if(s == "N"){
      v = LolLeaguesMiniseries::N;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesMiniseries_HPP
