#ifndef SWAGGER_TYPES_LoyaltyRewards_HPP
#define SWAGGER_TYPES_LoyaltyRewards_HPP
#include <json.hpp>
namespace test {
  // 
  struct LoyaltyRewards {
'    // 
    int32_t freeRewardedChampionsCount;
    // 
    int32_t freeRewardedSkinsCount;
    // 
    int32_t ipBoost;
    // 
    int32_t xpBoost;
  };

  void to_json(nlohmann::json& j, const LoyaltyRewards& v) {
    j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount;
    j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount;
    j["ipBoost"] = v.ipBoost;
    j["xpBoost"] = v.xpBoost;
  }

  void from_json(const nlohmann::json& j, LoyaltyRewards& v) {
    v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t>;
    v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t>;
    v.ipBoost = j.at("ipBoost").get<int32_t>;
    v.xpBoost = j.at("xpBoost").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LoyaltyRewards_HPP
