#ifndef SWAGGER_TYPES_LolEndOfGameLoginSummonerLevelAndPoints_HPP
#define SWAGGER_TYPES_LolEndOfGameLoginSummonerLevelAndPoints_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEndOfGameLoginSummonerLevelAndPoints {
    // 
    uint64_t expPoints;
    // 
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginSummonerLevelAndPoints& v) {
    j["expPoints"] = v.expPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginSummonerLevelAndPoints& v) {
    v.expPoints = j.at("expPoints").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLoginSummonerLevelAndPoints_HPP
