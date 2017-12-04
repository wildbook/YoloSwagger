#ifndef SWAGGER_TYPES_LolEndOfGameLoginSummonerLevelAndPoints_HPP
#define SWAGGER_TYPES_LolEndOfGameLoginSummonerLevelAndPoints_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEndOfGameLoginSummonerLevelAndPoints {
'    // 
    uint64_t expPoints;
    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameLoginSummonerLevelAndPoints& v) {
    j["expPoints"] = v.expPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameLoginSummonerLevelAndPoints& v) {
    v.expPoints = j.at("expPoints").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLoginSummonerLevelAndPoints_HPP
