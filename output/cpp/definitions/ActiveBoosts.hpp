#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoosts_t {
    uint32_t ipBoostPerWinCount;
    std::string firstWinOfTheDayStartTime;
    std::string ipBoostEndDate;
    uint32_t xpBoostPerWinCount;
    uint32_t xpLoyaltyBoost;
    std::string xpBoostEndDate;
    uint64_t summonerId;
    uint32_t ipLoyaltyBoost;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoosts_t& v) {
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["summonerId"] = v.summonerId;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoosts_t& v) {
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>();
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
  }
  inline std::string to_string(const ActiveBoosts_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
