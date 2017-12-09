#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoostsLcdsSummonerActiveBoostsDTO_t {
    uint32_t ipBoostPerWinCount;
    uint32_t ipLoyaltyBoost;
    int64_t ipBoostEndDate;
    uint32_t xpBoostPerWinCount;
    uint32_t xpLoyaltyBoost;
    int64_t xpBoostEndDate;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<int64_t>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<int64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
