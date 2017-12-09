#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MembershipInviteDto_t {
    std::string clubKey;
    std::string inviteePlatformId;
    std::string inviterPlatformId;
    uint64_t inviteeSummonerId;
    uint64_t inviteeAccountId;
    std::string clubName;
    uint64_t inviterAccountId;
    int32_t status;
    uint64_t inviterSummonerId;
  };

  inline void to_json(nlohmann::json& j, const MembershipInviteDto_t& v) {
    j["clubKey"] = v.clubKey;
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["clubName"] = v.clubName;
    j["inviterAccountId"] = v.inviterAccountId;
    j["status"] = v.status;
    j["inviterSummonerId"] = v.inviterSummonerId;
  }

  inline void from_json(const nlohmann::json& j, MembershipInviteDto_t& v) {
    v.clubKey = j.at("clubKey").get<std::string>();
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>();
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>();
    v.clubName = j.at("clubName").get<std::string>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.status = j.at("status").get<int32_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const MembershipInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
