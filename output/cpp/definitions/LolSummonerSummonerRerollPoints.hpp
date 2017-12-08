#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerSummonerRerollPoints_t {
    uint32_t numberOfRolls;
    uint32_t maxRolls;
    uint64_t pointsCostToRoll;
    uint64_t pointsToReroll;
    uint64_t currentPoints;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerRerollPoints_t& v) {
    j["numberOfRolls"] = v.numberOfRolls;
    j["maxRolls"] = v.maxRolls;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["pointsToReroll"] = v.pointsToReroll;
    j["currentPoints"] = v.currentPoints;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerRerollPoints_t& v) {
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>();
    v.maxRolls = j.at("maxRolls").get<uint32_t>();
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>();
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>();
    v.currentPoints = j.at("currentPoints").get<uint64_t>();
  }
  inline std::string to_string(const LolSummonerSummonerRerollPoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
