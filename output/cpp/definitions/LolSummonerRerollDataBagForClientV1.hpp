#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerRerollDataBagForClientV1_t {
    int64_t totalPoints;
    int64_t pointsUntilNextReroll;
    int32_t rerollCount;
    uint32_t maximumRerolls;
    int64_t pointsGainedLastGame;
    int64_t pointCostOfReroll;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRerollDataBagForClientV1_t& v) {
    j["totalPoints"] = v.totalPoints;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["rerollCount"] = v.rerollCount;
    j["maximumRerolls"] = v.maximumRerolls;
    j["pointsGainedLastGame"] = v.pointsGainedLastGame;
    j["pointCostOfReroll"] = v.pointCostOfReroll;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRerollDataBagForClientV1_t& v) {
    v.totalPoints = j.at("totalPoints").get<int64_t>();
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>();
    v.rerollCount = j.at("rerollCount").get<int32_t>();
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>();
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>();
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>();
  }
}
