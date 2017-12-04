#ifndef SWAGGER_TYPES_MembershipInviteDto_HPP
#define SWAGGER_TYPES_MembershipInviteDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MembershipInviteDto {
    // 
    int32_t status;
    // 
    uint64_t inviteeAccountId;
    // 
    uint64_t inviterSummonerId;
    // 
    std::string clubKey;
    // 
    std::string inviterPlatformId;
    // 
    uint64_t inviteeSummonerId;
    // 
    std::string inviteePlatformId;
    // 
    std::string clubName;
    // 
    uint64_t inviterAccountId;
  };

  inline void to_json(nlohmann::json& j, const MembershipInviteDto& v) {
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

  inline void from_json(const nlohmann::json& j, MembershipInviteDto& v) {
    v.status = j.at("status").get<int32_t>;
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>;
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>;
    v.clubKey = j.at("clubKey").get<std::string>;
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>;
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>;
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>;
    v.clubName = j.at("clubName").get<std::string>;
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_MembershipInviteDto_HPP
