#pragma once
#include <json.hpp>
#include <optional>
#include "ClubInviteStatus.hpp"
namespace leagueapi {
  struct ClubInvite_t {
    std::string clubKey;
    std::string clubName;
    std::string inviterSummonerName;
    ClubInviteStatus_t status;
    uint64_t inviteeSummonerId;
    uint64_t inviteeAccountId;
    uint64_t inviterAccountId;
    uint64_t inviterSummonerId;
  };

  inline void to_json(nlohmann::json& j, const ClubInvite_t& v) {
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
    j["inviterSummonerName"] = v.inviterSummonerName;
    j["status"] = v.status;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviterSummonerId"] = v.inviterSummonerId;
  }

  inline void from_json(const nlohmann::json& j, ClubInvite_t& v) {
    v.clubKey = j.at("clubKey").get<std::string>();
    v.clubName = j.at("clubName").get<std::string>();
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>();
    v.status = j.at("status").get<ClubInviteStatus_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
  }
}
