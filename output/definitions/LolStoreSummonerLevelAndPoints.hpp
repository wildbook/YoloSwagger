#ifndef SWAGGER_TYPES_LolStoreSummonerLevelAndPoints_HPP
#define SWAGGER_TYPES_LolStoreSummonerLevelAndPoints_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolStoreSummonerLevelAndPoints {
    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolStoreSummonerLevelAndPoints& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolStoreSummonerLevelAndPoints& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolStoreSummonerLevelAndPoints_HPP
