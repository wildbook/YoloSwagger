#ifndef SWAGGER_TYPES_LolLootLoginSummonerLevelAndPoints_HPP
#define SWAGGER_TYPES_LolLootLoginSummonerLevelAndPoints_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootLoginSummonerLevelAndPoints {
    // 
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSummonerLevelAndPoints& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSummonerLevelAndPoints& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootLoginSummonerLevelAndPoints_HPP
