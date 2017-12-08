#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerRerollDataBagForClientV1_t {
    int64_t totalPoints;
    int64_t pointsGainedLastGame;
    int32_t rerollCount;
    uint32_t maximumRerolls;
    int64_t pointCostOfReroll;
    int64_t pointsUntilNextReroll;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRerollDataBagForClientV1_t& v) {
    j["totalPoints"] = v.totalPoints;
    j["pointsGainedLastGame"] = v.pointsGainedLastGame;
    j["rerollCount"] = v.rerollCount;
    j["maximumRerolls"] = v.maximumRerolls;
    j["pointCostOfReroll"] = v.pointCostOfReroll;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRerollDataBagForClientV1_t& v) {
    v.totalPoints = j.at("totalPoints").get<int64_t>();
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>();
    v.rerollCount = j.at("rerollCount").get<int32_t>();
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>();
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>();
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>();
  }
  inline std::string to_string(const LolSummonerRerollDataBagForClientV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
