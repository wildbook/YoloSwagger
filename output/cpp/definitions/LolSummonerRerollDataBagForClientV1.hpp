#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerRerollDataBagForClientV1_t {
    int64_t pointsUntilNextReroll;
    int64_t pointCostOfReroll;
    uint32_t maximumRerolls;
    int64_t totalPoints;
    int32_t rerollCount;
    int64_t pointsGainedLastGame;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRerollDataBagForClientV1_t& v) {
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["pointCostOfReroll"] = v.pointCostOfReroll;
    j["maximumRerolls"] = v.maximumRerolls;
    j["totalPoints"] = v.totalPoints;
    j["rerollCount"] = v.rerollCount;
    j["pointsGainedLastGame"] = v.pointsGainedLastGame;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRerollDataBagForClientV1_t& v) {
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>();
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>();
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>();
    v.totalPoints = j.at("totalPoints").get<int64_t>();
    v.rerollCount = j.at("rerollCount").get<int32_t>();
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>();
  }
  inline std::string to_string(const LolSummonerRerollDataBagForClientV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
