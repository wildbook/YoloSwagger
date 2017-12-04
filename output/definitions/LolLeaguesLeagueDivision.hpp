#ifndef SWAGGER_TYPES_LolLeaguesLeagueDivision_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueDivision_HPP
#include <json.hpp>
#include "LolLeaguesLeagueStanding.hpp"
#include "LolLeaguesLeagueRank.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeagueDivision {
    // 
    LolLeaguesLeagueRank leagueRank;
    // 
    std::vector<LolLeaguesLeagueStanding> standings;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueDivision& v) {
    j["leagueRank"] = v.leagueRank;
    j["standings"] = v.standings;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueDivision& v) {
    v.leagueRank = j.at("leagueRank").get<LolLeaguesLeagueRank>;
    v.standings = j.at("standings").get<std::vector<LolLeaguesLeagueStanding>>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueDivision_HPP
