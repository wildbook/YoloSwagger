#ifndef SWAGGER_TYPES_LolSummonerSummonerRerollPoints_HPP
#define SWAGGER_TYPES_LolSummonerSummonerRerollPoints_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerSummonerRerollPoints {
    // 
    uint32_t numberOfRolls;
    // 
    uint32_t maxRolls;
    // 
    uint64_t pointsCostToRoll;
    // 
    uint64_t pointsToReroll;
    // 
    uint64_t currentPoints;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerRerollPoints& v) {
    j["numberOfRolls"] = v.numberOfRolls;
    j["maxRolls"] = v.maxRolls;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["pointsToReroll"] = v.pointsToReroll;
    j["currentPoints"] = v.currentPoints;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerRerollPoints& v) {
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>;
    v.maxRolls = j.at("maxRolls").get<uint32_t>;
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>;
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>;
    v.currentPoints = j.at("currentPoints").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerSummonerRerollPoints_HPP
