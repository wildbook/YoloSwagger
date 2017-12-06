#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LoyaltyRewards_t {
    int32_t ipBoost;
    int32_t freeRewardedChampionsCount;
    int32_t xpBoost;
    int32_t freeRewardedSkinsCount;
  };

  inline void to_json(nlohmann::json& j, const LoyaltyRewards_t& v) {
    j["ipBoost"] = v.ipBoost;
    j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount;
    j["xpBoost"] = v.xpBoost;
    j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount;
  }

  inline void from_json(const nlohmann::json& j, LoyaltyRewards_t& v) {
    v.ipBoost = j.at("ipBoost").get<int32_t>();
    v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t>();
    v.xpBoost = j.at("xpBoost").get<int32_t>();
    v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t>();
  }
}
