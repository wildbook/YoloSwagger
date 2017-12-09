#pragma once
#include <json.hpp>
#include <optional>
#include "LCDSChampionReward.hpp"
namespace leagueapi {
  struct LCDSLoyaltyRewards_t {
    int32_t xpBoost;
    int32_t ipBoost;
    std::vector<LCDSChampionReward_t> champions;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyRewards_t& v) {
    j["xpBoost"] = v.xpBoost;
    j["ipBoost"] = v.ipBoost;
    j["champions"] = v.champions;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyRewards_t& v) {
    v.xpBoost = j.at("xpBoost").get<int32_t>();
    v.ipBoost = j.at("ipBoost").get<int32_t>();
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward_t>>();
  }
  inline std::string to_string(const LCDSLoyaltyRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
