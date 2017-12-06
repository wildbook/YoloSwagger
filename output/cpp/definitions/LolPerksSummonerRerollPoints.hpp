#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksSummonerRerollPoints_t {
    uint32_t maxRolls;
    uint64_t pointsCostToRoll;
    uint64_t pointsToReroll;
    uint32_t numberOfRolls;
    uint64_t currentPoints;
  };

  inline void to_json(nlohmann::json& j, const LolPerksSummonerRerollPoints_t& v) {
    j["maxRolls"] = v.maxRolls;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["pointsToReroll"] = v.pointsToReroll;
    j["numberOfRolls"] = v.numberOfRolls;
    j["currentPoints"] = v.currentPoints;
  }

  inline void from_json(const nlohmann::json& j, LolPerksSummonerRerollPoints_t& v) {
    v.maxRolls = j.at("maxRolls").get<uint32_t>();
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>();
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>();
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>();
    v.currentPoints = j.at("currentPoints").get<uint64_t>();
  }
}
