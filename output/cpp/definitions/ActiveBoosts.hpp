#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoosts_t {
    std::string_t xpBoostEndDate;
    uint32_t_t xpBoostPerWinCount;
    std::string_t firstWinOfTheDayStartTime;
    std::string_t ipBoostEndDate;
    uint32_t_t ipBoostPerWinCount;
    uint32_t_t xpLoyaltyBoost;
    uint32_t_t ipLoyaltyBoost;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoosts_t& v) {
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoosts_t& v) {
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string_t>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t_t>();
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string_t>();
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string_t>();
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t_t>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const ActiveBoosts_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
