#pragma once
#include <json.hpp>
#include <optional>
#include "ClubInviteStatus.hpp"
namespace leagueapi {
  struct ClubInvite_t {
    ClubInviteStatus_t status;
    std::string clubName;
    uint64_t inviterSummonerId;
    uint64_t inviteeSummonerId;
    std::string clubKey;
    uint64_t inviterAccountId;
    uint64_t inviteeAccountId;
    std::string inviterSummonerName;
  };

  inline void to_json(nlohmann::json& j, const ClubInvite_t& v) {
    j["status"] = v.status;
    j["clubName"] = v.clubName;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["clubKey"] = v.clubKey;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviterSummonerName"] = v.inviterSummonerName;
  }

  inline void from_json(const nlohmann::json& j, ClubInvite_t& v) {
    v.status = j.at("status").get<ClubInviteStatus_t>();
    v.clubName = j.at("clubName").get<std::string>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>();
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>();
  }
  inline std::string to_string(const ClubInvite_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
