#ifndef SWAGGER_TYPES_LolEndOfGameLoginSummonerData_HPP
#define SWAGGER_TYPES_LolEndOfGameLoginSummonerData_HPP
#include <json.hpp>
#include "LolEndOfGameLoginSummonerLevelAndPoints.hpp"
namespace leagueapi {
  // 
  struct LolEndOfGameLoginSummonerData {
    // 
    LolEndOfGameLoginSummonerLevelAndPoints summonerLevelAndPoints;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameLoginSummonerData& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameLoginSummonerData& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolEndOfGameLoginSummonerLevelAndPoints>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLoginSummonerData_HPP
