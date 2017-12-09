#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoostsLcdsSummonerActiveBoostsDTO_t {
    uint64_t summonerId;
    uint32_t xpBoostPerWinCount;
    int64_t ipBoostEndDate;
    uint32_t ipLoyaltyBoost;
    uint32_t xpLoyaltyBoost;
    uint32_t ipBoostPerWinCount;
    int64_t xpBoostEndDate;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    j["summonerId"] = v.summonerId;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<int64_t>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<int64_t>();
  }
  inline std::string to_string(const ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
