#ifndef SWAGGER_TYPES_LolLobbyEligibilityRestriction_HPP
#define SWAGGER_TYPES_LolLobbyEligibilityRestriction_HPP
#include <json.hpp>
#include "LolLobbyEligibilityRestrictionCode.hpp"
namespace leagueapi {
  // 
  struct LolLobbyEligibilityRestriction {
    // 
    std::map<std::string, std::string> restrictionArgs;
    // 
    uint64_t expiredTimestamp;
    // 
    LolLobbyEligibilityRestrictionCode restrictionCode;
    // 
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibilityRestriction& v) {
    j["restrictionArgs"] = v.restrictionArgs;
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionCode"] = v.restrictionCode;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibilityRestriction& v) {
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>;
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>;
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode>;
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyEligibilityRestriction_HPP
