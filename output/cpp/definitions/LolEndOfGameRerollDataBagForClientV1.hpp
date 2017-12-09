#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameRerollDataBagForClientV1_t {
    int32_t rerollCount;
    uint32_t maximumRerolls;
    int64_t pointsUntilNextReroll;
    int64_t totalPoints;
    int64_t pointsGainedLastGame;
    int64_t pointCostOfReroll;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameRerollDataBagForClientV1_t& v) {
    j["rerollCount"] = v.rerollCount;
    j["maximumRerolls"] = v.maximumRerolls;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["totalPoints"] = v.totalPoints;
    j["pointsGainedLastGame"] = v.pointsGainedLastGame;
    j["pointCostOfReroll"] = v.pointCostOfReroll;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameRerollDataBagForClientV1_t& v) {
    v.rerollCount = j.at("rerollCount").get<int32_t>();
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>();
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>();
    v.totalPoints = j.at("totalPoints").get<int64_t>();
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>();
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>();
  }
  inline std::string to_string(const LolEndOfGameRerollDataBagForClientV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
