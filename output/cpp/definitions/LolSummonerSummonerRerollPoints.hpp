#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerSummonerRerollPoints_t {
    uint64_t currentPoints;
    uint64_t pointsToReroll;
    uint64_t pointsCostToRoll;
    uint32_t maxRolls;
    uint32_t numberOfRolls;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerRerollPoints_t& v) {
    j["currentPoints"] = v.currentPoints;
    j["pointsToReroll"] = v.pointsToReroll;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["maxRolls"] = v.maxRolls;
    j["numberOfRolls"] = v.numberOfRolls;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerRerollPoints_t& v) {
    v.currentPoints = j.at("currentPoints").get<uint64_t>();
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>();
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>();
    v.maxRolls = j.at("maxRolls").get<uint32_t>();
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>();
  }
  inline std::string to_string(const LolSummonerSummonerRerollPoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
