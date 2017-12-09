#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoosts_t {
    uint64_t summonerId;
    uint32_t xpBoostPerWinCount;
    uint32_t xpLoyaltyBoost;
    std::string ipBoostEndDate;
    uint32_t ipLoyaltyBoost;
    uint32_t ipBoostPerWinCount;
    std::string firstWinOfTheDayStartTime;
    std::string xpBoostEndDate;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoosts_t& v) {
    j["summonerId"] = v.summonerId;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoosts_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>();
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>();
  }
  inline std::string to_string(const ActiveBoosts_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
