#ifndef SWAGGER_TYPES_ActiveBoosts_HPP
#define SWAGGER_TYPES_ActiveBoosts_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ActiveBoosts {
    // 
    std::string firstWinOfTheDayStartTime;
    // 
    std::string ipBoostEndDate;
    // 
    uint32_t ipBoostPerWinCount;
    // 
    uint32_t ipLoyaltyBoost;
    // 
    uint64_t summonerId;
    // 
    std::string xpBoostEndDate;
    // 
    uint32_t xpBoostPerWinCount;
    // 
    uint32_t xpLoyaltyBoost;
  };

  void to_json(nlohmann::json& j, const ActiveBoosts& v) {
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["summonerId"] = v.summonerId;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
  }

  void from_json(const nlohmann::json& j, ActiveBoosts& v) {
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>;
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>;
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>;
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>;
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>;
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_ActiveBoosts_HPP
