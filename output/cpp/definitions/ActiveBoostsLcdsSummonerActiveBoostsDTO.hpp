#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoostsLcdsSummonerActiveBoostsDTO_t {
    uint32_t ipLoyaltyBoost;
    uint32_t xpBoostPerWinCount;
    uint64_t summonerId;
    uint32_t ipBoostPerWinCount;
    int64_t ipBoostEndDate;
    int64_t xpBoostEndDate;
    uint32_t xpLoyaltyBoost;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["summonerId"] = v.summonerId;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<int64_t>();
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<int64_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
  }
  inline std::string to_string(const ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
