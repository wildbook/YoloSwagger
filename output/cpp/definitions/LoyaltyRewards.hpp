#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LoyaltyRewards_t {
    int32_t xpBoost;
    int32_t freeRewardedChampionsCount;
    int32_t freeRewardedSkinsCount;
    int32_t ipBoost;
  };

  inline void to_json(nlohmann::json& j, const LoyaltyRewards_t& v) {
    j["xpBoost"] = v.xpBoost;
    j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount;
    j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount;
    j["ipBoost"] = v.ipBoost;
  }

  inline void from_json(const nlohmann::json& j, LoyaltyRewards_t& v) {
    v.xpBoost = j.at("xpBoost").get<int32_t>();
    v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t>();
    v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t>();
    v.ipBoost = j.at("ipBoost").get<int32_t>();
  }
  inline std::string to_string(const LoyaltyRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
