#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameRerollDataBagForClientV1_t {
    int64_t pointsGainedLastGame;
    int64_t pointsUntilNextReroll;
    uint32_t maximumRerolls;
    int64_t totalPoints;
    int64_t pointCostOfReroll;
    int32_t rerollCount;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameRerollDataBagForClientV1_t& v) {
    j["pointsGainedLastGame"] = v.pointsGainedLastGame;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["maximumRerolls"] = v.maximumRerolls;
    j["totalPoints"] = v.totalPoints;
    j["pointCostOfReroll"] = v.pointCostOfReroll;
    j["rerollCount"] = v.rerollCount;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameRerollDataBagForClientV1_t& v) {
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>();
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>();
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>();
    v.totalPoints = j.at("totalPoints").get<int64_t>();
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>();
    v.rerollCount = j.at("rerollCount").get<int32_t>();
  }
  inline std::string to_string(const LolEndOfGameRerollDataBagForClientV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
