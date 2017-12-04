#ifndef SWAGGER_TYPES_MembershipInviteDto_HPP
#define SWAGGER_TYPES_MembershipInviteDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MembershipInviteDto {
    // 
    std::string clubKey;
    // 
    std::string clubName;
    // 
    uint64_t inviteeAccountId;
    // 
    std::string inviteePlatformId;
    // 
    uint64_t inviteeSummonerId;
    // 
    uint64_t inviterAccountId;
    // 
    std::string inviterPlatformId;
    // 
    uint64_t inviterSummonerId;
    // 
    int32_t status;
  };

  inline void to_json(nlohmann::json& j, const MembershipInviteDto& v) {
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, MembershipInviteDto& v) {
    v.clubKey = j.at("clubKey").get<std::string>;
    v.clubName = j.at("clubName").get<std::string>;
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>;
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>;
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>;
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>;
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>;
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>;
    v.status = j.at("status").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_MembershipInviteDto_HPP
