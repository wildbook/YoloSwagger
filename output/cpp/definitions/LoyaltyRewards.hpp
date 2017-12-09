#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LoyaltyRewards_t {
    int32_t freeRewardedSkinsCount;
    int32_t ipBoost;
    int32_t freeRewardedChampionsCount;
    int32_t xpBoost;
  };

  inline void to_json(nlohmann::json& j, const LoyaltyRewards_t& v) {
    j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount;
    j["ipBoost"] = v.ipBoost;
    j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount;
    j["xpBoost"] = v.xpBoost;
  }

  inline void from_json(const nlohmann::json& j, LoyaltyRewards_t& v) {
    v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t>();
    v.ipBoost = j.at("ipBoost").get<int32_t>();
    v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t>();
    v.xpBoost = j.at("xpBoost").get<int32_t>();
  }
  inline std::string to_string(const LoyaltyRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
