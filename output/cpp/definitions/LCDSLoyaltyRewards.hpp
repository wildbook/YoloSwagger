#pragma once
#include <json.hpp>
#include <optional>
#include "LCDSChampionReward.hpp"
namespace leagueapi {
  struct LCDSLoyaltyRewards_t {
    std::vector<LCDSChampionReward_t> champions;
    int32_t ipBoost;
    int32_t xpBoost;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyRewards_t& v) {
    j["champions"] = v.champions;
    j["ipBoost"] = v.ipBoost;
    j["xpBoost"] = v.xpBoost;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyRewards_t& v) {
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward_t>>();
    v.ipBoost = j.at("ipBoost").get<int32_t>();
    v.xpBoost = j.at("xpBoost").get<int32_t>();
  }
  inline std::string to_string(const LCDSLoyaltyRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
