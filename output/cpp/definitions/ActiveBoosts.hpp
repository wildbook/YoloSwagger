#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoosts_t {
    std::string xpBoostEndDate;
    uint32_t xpBoostPerWinCount;
    std::string firstWinOfTheDayStartTime;
    uint32_t ipBoostPerWinCount;
    uint32_t xpLoyaltyBoost;
    uint64_t summonerId;
    std::string ipBoostEndDate;
    uint32_t ipLoyaltyBoost;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoosts_t& v) {
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["summonerId"] = v.summonerId;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoosts_t& v) {
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>();
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
  }
}
