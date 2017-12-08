#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPointSummary_t {
    int32_t pointsToNextRoll;
    int32_t numberOfRolls;
    int32_t maxRolls;
    int32_t pointsCostToRoll;
    int32_t currentPoints;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPointSummary_t& v) {
    j["pointsToNextRoll"] = v.pointsToNextRoll;
    j["numberOfRolls"] = v.numberOfRolls;
    j["maxRolls"] = v.maxRolls;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["currentPoints"] = v.currentPoints;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPointSummary_t& v) {
    v.pointsToNextRoll = j.at("pointsToNextRoll").get<int32_t>();
    v.numberOfRolls = j.at("numberOfRolls").get<int32_t>();
    v.maxRolls = j.at("maxRolls").get<int32_t>();
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<int32_t>();
    v.currentPoints = j.at("currentPoints").get<int32_t>();
  }
  inline std::string to_string(const ChampSelectLcdsPointSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
