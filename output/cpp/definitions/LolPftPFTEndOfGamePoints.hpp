#ifndef SWAGGER_TYPES_LolPftPFTEndOfGamePoints_HPP
#define SWAGGER_TYPES_LolPftPFTEndOfGamePoints_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPftPFTEndOfGamePoints {
    // 
    int32_t rerollCount;
    // 
    int32_t totalPoints;
    // 
    int32_t pointChangeFromGameplay;
    // 
    int32_t pointsUsed;
    // 
    int32_t previousPoints;
    // 
    int32_t pointChangeFromChampionsOwned;
    // 
    int32_t pointsUntilNextReroll;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGamePoints& v) {
    j["rerollCount"] = v.rerollCount;
    j["totalPoints"] = v.totalPoints;
    j["pointChangeFromGameplay"] = v.pointChangeFromGameplay;
    j["pointsUsed"] = v.pointsUsed;
    j["previousPoints"] = v.previousPoints;
    j["pointChangeFromChampionsOwned"] = v.pointChangeFromChampionsOwned;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGamePoints& v) {
    v.rerollCount = j.at("rerollCount").get<int32_t>;
    v.totalPoints = j.at("totalPoints").get<int32_t>;
    v.pointChangeFromGameplay = j.at("pointChangeFromGameplay").get<int32_t>;
    v.pointsUsed = j.at("pointsUsed").get<int32_t>;
    v.previousPoints = j.at("previousPoints").get<int32_t>;
    v.pointChangeFromChampionsOwned = j.at("pointChangeFromChampionsOwned").get<int32_t>;
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTEndOfGamePoints_HPP