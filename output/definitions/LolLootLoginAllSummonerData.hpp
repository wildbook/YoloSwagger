#ifndef SWAGGER_TYPES_LolLootLoginAllSummonerData_HPP
#define SWAGGER_TYPES_LolLootLoginAllSummonerData_HPP
#include <json.hpp>
#include "LolLootLoginSummonerLevelAndPoints.hpp"
namespace test {
  // 
  struct LolLootLoginAllSummonerData {
'    // 
    LolLootLoginSummonerLevelAndPoints summonerLevelAndPoints;
  };

  void to_json(nlohmann::json& j, const LolLootLoginAllSummonerData& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  void from_json(const nlohmann::json& j, LolLootLoginAllSummonerData& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolLootLoginSummonerLevelAndPoints>;
  }

}
#endif // SWAGGER_TYPES_LolLootLoginAllSummonerData_HPP
