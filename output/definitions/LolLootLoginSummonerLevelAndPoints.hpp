#ifndef SWAGGER_TYPES_LolLootLoginSummonerLevelAndPoints_HPP
#define SWAGGER_TYPES_LolLootLoginSummonerLevelAndPoints_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLootLoginSummonerLevelAndPoints {
'    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolLootLoginSummonerLevelAndPoints& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolLootLoginSummonerLevelAndPoints& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootLoginSummonerLevelAndPoints_HPP
