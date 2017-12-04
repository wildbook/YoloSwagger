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
    int32_t xpBoost;
    // 
    int32_t ipBoost;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyRewards& v) {
    j["champions"] = v.champions;
    j["xpBoost"] = v.xpBoost;
    j["ipBoost"] = v.ipBoost;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyRewards& v) {
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward>>;
    v.xpBoost = j.at("xpBoost").get<int32_t>;
    v.ipBoost = j.at("ipBoost").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LCDSLoyaltyRewards_HPP
