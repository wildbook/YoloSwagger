#ifndef SWAGGER_TYPES_LoyaltyRewards_HPP
#define SWAGGER_TYPES_LoyaltyRewards_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LoyaltyRewards {
    // 
    int32_t freeRewardedSkinsCount;
    // 
    int32_t freeRewardedChampionsCount;
    // 
    int32_t xpBoost;
    // 
    int32_t ipBoost;
  };

  inline void to_json(nlohmann::json& j, const LoyaltyRewards& v) {
    j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount;
    j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount;
    j["xpBoost"] = v.xpBoost;
    j["ipBoost"] = v.ipBoost;
  }

  inline void from_json(const nlohmann::json& j, LoyaltyRewards& v) {
    v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t>;
    v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t>;
    v.xpBoost = j.at("xpBoost").get<int32_t>;
    v.ipBoost = j.at("ipBoost").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LoyaltyRewards_HPP
