#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibilityRestrictionCode.hpp"
namespace leagueapi {
  struct LolLobbyEligibilityRestriction_t {
    uint64_t expiredTimestamp;
    std::map<std::string, std::string> restrictionArgs;
    LolLobbyEligibilityRestrictionCode_t restrictionCode;
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibilityRestriction_t& v) {
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionArgs"] = v.restrictionArgs;
    j["restrictionCode"] = v.restrictionCode;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibilityRestriction_t& v) {
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>();
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>();
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode_t>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
  }
}
