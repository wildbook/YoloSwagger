#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LoyaltyRewards_t {
    int32_t_t freeRewardedSkinsCount;
    int32_t_t freeRewardedChampionsCount;
    int32_t_t xpBoost;
    int32_t_t ipBoost;
  };

  inline void to_json(nlohmann::json& j, const LoyaltyRewards_t& v) {
    j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount;
    j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount;
    j["xpBoost"] = v.xpBoost;
    j["ipBoost"] = v.ipBoost;
  }

  inline void from_json(const nlohmann::json& j, LoyaltyRewards_t& v) {
    v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t_t>();
    v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t_t>();
    v.xpBoost = j.at("xpBoost").get<int32_t_t>();
    v.ipBoost = j.at("ipBoost").get<int32_t_t>();
  }
  inline std::string to_string(const LoyaltyRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
