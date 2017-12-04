#ifndef SWAGGER_TYPES_RerollPointsDTO_HPP
#define SWAGGER_TYPES_RerollPointsDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RerollPointsDTO {
    // 
    uint64_t currentPoints;
    // 
    uint32_t maxRolls;
    // 
    uint32_t numberOfRolls;
    // 
    uint64_t pointsCostToRoll;
    // 
    uint64_t pointsToReroll;
  };

  void to_json(nlohmann::json& j, const RerollPointsDTO& v) {
    j["currentPoints"] = v.currentPoints;
    j["maxRolls"] = v.maxRolls;
    j["numberOfRolls"] = v.numberOfRolls;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["pointsToReroll"] = v.pointsToReroll;
  }

  void from_json(const nlohmann::json& j, RerollPointsDTO& v) {
    v.currentPoints = j.at("currentPoints").get<uint64_t>;
    v.maxRolls = j.at("maxRolls").get<uint32_t>;
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>;
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>;
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RerollPointsDTO_HPP
