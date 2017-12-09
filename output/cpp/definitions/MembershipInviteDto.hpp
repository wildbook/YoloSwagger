#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MembershipInviteDto_t {
    int32_t status;
    std::string clubName;
    std::string inviterPlatformId;
    std::string inviteePlatformId;
    uint64_t inviteeSummonerId;
    std::string clubKey;
    uint64_t inviterAccountId;
    uint64_t inviterSummonerId;
    uint64_t inviteeAccountId;
  };

  inline void to_json(nlohmann::json& j, const MembershipInviteDto_t& v) {
    j["status"] = v.status;
    j["clubName"] = v.clubName;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["clubKey"] = v.clubKey;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["inviteeAccountId"] = v.inviteeAccountId;
  }

  inline void from_json(const nlohmann::json& j, MembershipInviteDto_t& v) {
    v.status = j.at("status").get<int32_t>();
    v.clubName = j.at("clubName").get<std::string>();
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>();
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>();
  }
  inline std::string to_string(const MembershipInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
