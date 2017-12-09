#pragma once
#include <json.hpp>
#include <optional>
#include "LCDSChampionReward.hpp"
namespace leagueapi {
  struct LCDSLoyaltyRewards_t {
    int32_t ipBoost;
    std::vector<LCDSChampionReward_t> champions;
    int32_t xpBoost;
  };

  inline void to_json(nlohmann::json& j, const LCDSLoyaltyRewards_t& v) {
    j["ipBoost"] = v.ipBoost;
    j["champions"] = v.champions;
    j["xpBoost"] = v.xpBoost;
  }

  inline void from_json(const nlohmann::json& j, LCDSLoyaltyRewards_t& v) {
    v.ipBoost = j.at("ipBoost").get<int32_t>();
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward_t>>();
    v.xpBoost = j.at("xpBoost").get<int32_t>();
  }
  inline std::string to_string(const LCDSLoyaltyRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
