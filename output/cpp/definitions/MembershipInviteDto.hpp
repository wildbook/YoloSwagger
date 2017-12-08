#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MembershipInviteDto_t {
    int32_t_t status;
    uint64_t_t inviteeAccountId;
    uint64_t_t inviterSummonerId;
    std::string_t clubKey;
    std::string_t inviterPlatformId;
    uint64_t_t inviteeSummonerId;
    std::string_t inviteePlatformId;
    std::string_t clubName;
    uint64_t_t inviterAccountId;
  };

  inline void to_json(nlohmann::json& j, const MembershipInviteDto_t& v) {
    j["status"] = v.status;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["clubKey"] = v.clubKey;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["clubName"] = v.clubName;
    j["inviterAccountId"] = v.inviterAccountId;
  }

  inline void from_json(const nlohmann::json& j, MembershipInviteDto_t& v) {
    v.status = j.at("status").get<int32_t_t>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t_t>();
    v.clubKey = j.at("clubKey").get<std::string_t>();
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t_t>();
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string_t>();
    v.clubName = j.at("clubName").get<std::string_t>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t_t>();
  }
  inline std::string to_string(const MembershipInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
