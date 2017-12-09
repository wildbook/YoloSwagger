#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibilityRestrictionCode.hpp"
namespace leagueapi {
  struct LolLobbyEligibilityRestriction_t {
    std::vector<uint64_t> summonerIds;
    uint64_t expiredTimestamp;
    LolLobbyEligibilityRestrictionCode_t restrictionCode;
    std::map<std::string, std::string> restrictionArgs;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibilityRestriction_t& v) {
    j["summonerIds"] = v.summonerIds;
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionCode"] = v.restrictionCode;
    j["restrictionArgs"] = v.restrictionArgs;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibilityRestriction_t& v) {
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>();
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode_t>();
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>();
  }
  inline std::string to_string(const LolLobbyEligibilityRestriction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
