#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoosts_t {
    std::string ipBoostEndDate;
    std::string firstWinOfTheDayStartTime;
    uint32_t xpBoostPerWinCount;
    uint32_t xpLoyaltyBoost;
    std::string xpBoostEndDate;
    uint32_t ipBoostPerWinCount;
    uint32_t ipLoyaltyBoost;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoosts_t& v) {
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoosts_t& v) {
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>();
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>();
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const ActiveBoosts_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
