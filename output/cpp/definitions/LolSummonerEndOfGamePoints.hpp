#ifndef SWAGGER_TYPES_LolSummonerEndOfGamePoints_HPP
#define SWAGGER_TYPES_LolSummonerEndOfGamePoints_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerEndOfGamePoints {
    // 
    uint32_t rerollCount;
    // 
    uint64_t totalPoints;
    // 
    uint64_t pointsUntilNextReroll;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerEndOfGamePoints& v) {
    j["rerollCount"] = v.rerollCount;
    j["totalPoints"] = v.totalPoints;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerEndOfGamePoints& v) {
    v.rerollCount = j.at("rerollCount").get<uint32_t>;
    v.totalPoints = j.at("totalPoints").get<uint64_t>;
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerEndOfGamePoints_HPP
