#ifndef SWAGGER_TYPES_LCDSLoyaltyRewards_HPP
#define SWAGGER_TYPES_LCDSLoyaltyRewards_HPP
#include <json.hpp>
#include "LCDSChampionReward.hpp"
namespace leagueapi {
  // 
  struct LCDSLoyaltyRewards {
    // 
    std::vector<LCDSChampionReward> champions;
    // 
    int32_t ipBoost;
    // 
    int32_t xpBoost;
  };

  void to_json(nlohmann::json& j, const LCDSLoyaltyRewards& v) {
    j["champions"] = v.champions;
    j["ipBoost"] = v.ipBoost;
    j["xpBoost"] = v.xpBoost;
  }

  void from_json(const nlohmann::json& j, LCDSLoyaltyRewards& v) {
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward>>;
    v.ipBoost = j.at("ipBoost").get<int32_t>;
    v.xpBoost = j.at("xpBoost").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LCDSLoyaltyRewards_HPP
