#ifndef SWAGGER_TYPES_LolLobbyEligibilityRestriction_HPP
#define SWAGGER_TYPES_LolLobbyEligibilityRestriction_HPP
#include <json.hpp>
#include "LolLobbyEligibilityRestrictionCode.hpp"
namespace leagueapi {
  // 
  struct LolLobbyEligibilityRestriction {
    // 
    uint64_t expiredTimestamp;
    // 
    std::map<std::string, std::string> restrictionArgs;
    // 
    LolLobbyEligibilityRestrictionCode restrictionCode;
    // 
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibilityRestriction& v) {
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionArgs"] = v.restrictionArgs;
    j["restrictionCode"] = v.restrictionCode;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibilityRestriction& v) {
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>;
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>;
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode>;
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyEligibilityRestriction_HPP
