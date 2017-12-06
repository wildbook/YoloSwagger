#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoostsLcdsSummonerActiveBoostsDTO_t {
    int64_t ipBoostEndDate;
    uint32_t ipBoostPerWinCount;
    uint32_t ipLoyaltyBoost;
    uint64_t summonerId;
    int64_t xpBoostEndDate;
    uint32_t xpBoostPerWinCount;
    uint32_t xpLoyaltyBoost;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["summonerId"] = v.summonerId;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<int64_t>();
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<int64_t>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
  }
}
