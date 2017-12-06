#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BaseMembershipInviteDto_t {
    std::string clubKey;
    std::string clubName;
    int32_t status;
    uint64_t inviteeSummonerId;
    std::string inviterPlatformId;
    std::string inviteePlatformId;
    uint64_t inviterAccountId;
    uint64_t inviterSummonerId;
  };

  inline void to_json(nlohmann::json& j, const BaseMembershipInviteDto_t& v) {
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
    j["status"] = v.status;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviterSummonerId"] = v.inviterSummonerId;
  }

  inline void from_json(const nlohmann::json& j, BaseMembershipInviteDto_t& v) {
    v.clubKey = j.at("clubKey").get<std::string>();
    v.clubName = j.at("clubName").get<std::string>();
    v.status = j.at("status").get<int32_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>();
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
  }
}
