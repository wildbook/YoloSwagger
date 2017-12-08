#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BaseMembershipInviteDto_t {
    std::string inviteePlatformId;
    std::string inviterPlatformId;
    uint64_t inviterAccountId;
    uint64_t inviteeSummonerId;
    uint64_t inviterSummonerId;
    int32_t status;
    std::string clubKey;
    std::string clubName;
  };

  inline void to_json(nlohmann::json& j, const BaseMembershipInviteDto_t& v) {
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["status"] = v.status;
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
  }

  inline void from_json(const nlohmann::json& j, BaseMembershipInviteDto_t& v) {
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>();
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
    v.status = j.at("status").get<int32_t>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.clubName = j.at("clubName").get<std::string>();
  }
  inline std::string to_string(const BaseMembershipInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
