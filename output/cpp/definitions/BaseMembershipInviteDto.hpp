#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BaseMembershipInviteDto_t {
    int32_t status;
    uint64_t inviterSummonerId;
    std::string clubKey;
    std::string inviterPlatformId;
    uint64_t inviteeSummonerId;
    std::string inviteePlatformId;
    std::string clubName;
    uint64_t inviterAccountId;
  };

  inline void to_json(nlohmann::json& j, const BaseMembershipInviteDto_t& v) {
    j["status"] = v.status;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["clubKey"] = v.clubKey;
    j["inviterPlatformId"] = v.inviterPlatformId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviteePlatformId"] = v.inviteePlatformId;
    j["clubName"] = v.clubName;
    j["inviterAccountId"] = v.inviterAccountId;
  }

  inline void from_json(const nlohmann::json& j, BaseMembershipInviteDto_t& v) {
    v.status = j.at("status").get<int32_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>();
    v.clubName = j.at("clubName").get<std::string>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
  }
  inline std::string to_string(const BaseMembershipInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
