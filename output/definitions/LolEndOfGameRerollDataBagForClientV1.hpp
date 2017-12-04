#ifndef SWAGGER_TYPES_LolEndOfGameRerollDataBagForClientV1_HPP
#define SWAGGER_TYPES_LolEndOfGameRerollDataBagForClientV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEndOfGameRerollDataBagForClientV1 {
    // 
    uint32_t maximumRerolls;
    // 
    int64_t pointCostOfReroll;
    // 
    int64_t pointsGainedLastGame;
    // 
    int64_t pointsUntilNextReroll;
    // 
    int32_t rerollCount;
    // 
    int64_t totalPoints;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameRerollDataBagForClientV1& v) {
    j["maximumRerolls"] = v.maximumRerolls;
    j["pointCostOfReroll"] = v.pointCostOfReroll;
    j["pointsGainedLastGame"] = v.pointsGainedLastGame;
    j["pointsUntilNextReroll"] = v.pointsUntilNextReroll;
    j["rerollCount"] = v.rerollCount;
    j["totalPoints"] = v.totalPoints;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameRerollDataBagForClientV1& v) {
    v.maximumRerolls = j.at("maximumRerolls").get<uint32_t>;
    v.pointCostOfReroll = j.at("pointCostOfReroll").get<int64_t>;
    v.pointsGainedLastGame = j.at("pointsGainedLastGame").get<int64_t>;
    v.pointsUntilNextReroll = j.at("pointsUntilNextReroll").get<int64_t>;
    v.rerollCount = j.at("rerollCount").get<int32_t>;
    v.totalPoints = j.at("totalPoints").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameRerollDataBagForClientV1_HPP
