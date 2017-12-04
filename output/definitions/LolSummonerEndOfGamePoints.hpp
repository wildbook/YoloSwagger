#ifndef SWAGGER_TYPES_LolSummonerEndOfGamePoints_HPP
#define SWAGGER_TYPES_LolSummonerEndOfGamePoints_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerEndOfGamePoints {
    // 
    uint64_t pointsUntilNextReroll;
    // 
    uint32_t rerollCount;
    // 
    uint64_t totalPoints;
  };

  void to_json(nlohmann::json& j, const LolSummonerEndOfGamePoints& v) {
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["rerollCount"] = v.rerollCount;
    j["totalPoints"] = v.totalPoints;
  }

  void from_json(const nlohmann::json& j, LolSummonerEndOfGamePoints& v) {
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<uint64_t>;
    v.rerollCount = j.at("rerollCount").get<uint32_t>;
    v.totalPoints = j.at("totalPoints").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerEndOfGamePoints_HPP
