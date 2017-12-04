#ifndef SWAGGER_TYPES_LolLeaguesLeagueDivision_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueDivision_HPP
#include <json.hpp>
#include "LolLeaguesLeagueStanding.hpp"
#include "LolLeaguesLeagueRank.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeagueDivision {
    // 
    std::vector<LolLeaguesLeagueStanding> standings;
    // 
    LolLeaguesLeagueRank leagueRank;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueDivision& v) {
    j["standings"] = v.standings;
    j["leagueRank"] = v.leagueRank;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueDivision& v) {
    v.standings = j.at("standings").get<std::vector<LolLeaguesLeagueStanding>>;
    v.leagueRank = j.at("leagueRank").get<LolLeaguesLeagueRank>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueDivision_HPP
