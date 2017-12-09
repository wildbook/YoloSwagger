#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BaseMembershipInviteDto_t {
    int32_t status;
    std::string clubKey;
    uint64_t inviterSummonerId;
    std::string inviterPlatformId;
    std::string inviteePlatformId;
    std::string clubName;
    uint64_t inviterAccountId;
    uint64_t inviteeSummonerId;
  };

  inline void to_json(nlohmann::json& j, const BaseMembershipInviteDto_t& v) {
    j["status"] = v.status;
    j["clubKey"] = v.clubKey;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["clubName"] = v.clubName;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
  }

  inline void from_json(const nlohmann::json& j, BaseMembershipInviteDto_t& v) {
    v.status = j.at("status").get<int32_t>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>();
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>();
    v.clubName = j.at("clubName").get<std::string>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const BaseMembershipInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
