#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MembershipInviteDto_t {
    uint64_t inviterAccountId;
    std::string clubName;
    int32_t status;
    uint64_t inviteeSummonerId;
    std::string inviterPlatformId;
    uint64_t inviteeAccountId;
    std::string inviteePlatformId;
    std::string clubKey;
    uint64_t inviterSummonerId;
  };

  inline void to_json(nlohmann::json& j, const MembershipInviteDto_t& v) {
    j["inviterAccountId"] = v.inviterAccountId;
    j["clubName"] = v.clubName;
    j["status"] = v.status;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["clubKey"] = v.clubKey;
    j["inviterSummonerId"] = v.inviterSummonerId;
  }

  inline void from_json(const nlohmann::json& j, MembershipInviteDto_t& v) {
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.clubName = j.at("clubName").get<std::string>();
    v.status = j.at("status").get<int32_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>();
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
  }
}
