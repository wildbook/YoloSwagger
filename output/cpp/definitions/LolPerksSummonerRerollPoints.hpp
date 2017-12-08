#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksSummonerRerollPoints_t {
    uint32_t_t numberOfRolls;
    uint32_t_t maxRolls;
    uint64_t_t pointsCostToRoll;
    uint64_t_t pointsToReroll;
    uint64_t_t currentPoints;
  };

  inline void to_json(nlohmann::json& j, const LolPerksSummonerRerollPoints_t& v) {
    j["numberOfRolls"] = v.numberOfRolls;
    j["maxRolls"] = v.maxRolls;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["pointsToReroll"] = v.pointsToReroll;
    j["currentPoints"] = v.currentPoints;
  }

  inline void from_json(const nlohmann::json& j, LolPerksSummonerRerollPoints_t& v) {
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t_t>();
    v.maxRolls = j.at("maxRolls").get<uint32_t_t>();
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t_t>();
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t_t>();
    v.currentPoints = j.at("currentPoints").get<uint64_t_t>();
  }
  inline std::string to_string(const LolPerksSummonerRerollPoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
