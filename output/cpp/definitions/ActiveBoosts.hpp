#ifndef SWAGGER_TYPES_ActiveBoosts_HPP
#define SWAGGER_TYPES_ActiveBoosts_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ActiveBoosts {
    // 
    std::string xpBoostEndDate;
    // 
    uint32_t xpBoostPerWinCount;
    // 
    std::string firstWinOfTheDayStartTime;
    // 
    std::string ipBoostEndDate;
    // 
    uint32_t ipBoostPerWinCount;
    // 
    uint32_t xpLoyaltyBoost;
    // 
    uint32_t ipLoyaltyBoost;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoosts& v) {
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoosts& v) {
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>;
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>;
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>;
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>;
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>;
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>;
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_ActiveBoosts_HPP
