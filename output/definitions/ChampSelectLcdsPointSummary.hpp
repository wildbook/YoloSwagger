#ifndef SWAGGER_TYPES_ChampSelectLcdsPointSummary_HPP
#define SWAGGER_TYPES_ChampSelectLcdsPointSummary_HPP
#include <json.hpp>
namespace test {
  // 
  struct ChampSelectLcdsPointSummary {
'    // 
    int32_t currentPoints;
    // 
    int32_t maxRolls;
    // 
    int32_t numberOfRolls;
    // 
    int32_t pointsCostToRoll;
    // 
    int32_t pointsToNextRoll;
  };

  void to_json(nlohmann::json& j, const ChampSelectLcdsPointSummary& v) {
    j["currentPoints"] = v.currentPoints;
    j["maxRolls"] = v.maxRolls;
    j["numberOfRolls"] = v.numberOfRolls;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["pointsToNextRoll"] = v.pointsToNextRoll;
  }

  void from_json(const nlohmann::json& j, ChampSelectLcdsPointSummary& v) {
    v.currentPoints = j.at("currentPoints").get<int32_t>;
    v.maxRolls = j.at("maxRolls").get<int32_t>;
    v.numberOfRolls = j.at("numberOfRolls").get<int32_t>;
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<int32_t>;
    v.pointsToNextRoll = j.at("pointsToNextRoll").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsPointSummary_HPP
