#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameRerollDataBagForClientV1_t {
    uint32_t maximumRerolls;
    int64_t pointCostOfReroll;
    int64_t pointsGainedLastGame;
    int64_t pointsUntilNextReroll;
    int32_t rerollCount;
    int64_t totalPoints;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameRerollDataBagForClientV1_t& v) {
    j["maximumRerolls"] = v.maximumRerolls;
    j["pointCostOfReroll"] = v.pointCostOfReroll;
    j["pointsGainedLastGame"] = v.pointsGainedLastGame;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["rerollCount"] = v.rerollCount;
    j["totalPoints"] = v.totalPoints;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameRerollDataBagForClientV1_t& v) {
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>();
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>();
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>();
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>();
    v.rerollCount = j.at("rerollCount").get<int32_t>();
    v.totalPoints = j.at("totalPoints").get<int64_t>();
  }
}
