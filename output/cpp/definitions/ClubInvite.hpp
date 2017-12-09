#pragma once
#include <json.hpp>
#include <optional>
#include "ClubInviteStatus.hpp"
namespace leagueapi {
  struct ClubInvite_t {
    std::string clubKey;
    uint64_t inviterSummonerId;
    uint64_t inviteeSummonerId;
    uint64_t inviteeAccountId;
    std::string clubName;
    uint64_t inviterAccountId;
    ClubInviteStatus_t status;
    std::string inviterSummonerName;
  };

  inline void to_json(nlohmann::json& j, const ClubInvite_t& v) {
    j["clubKey"] = v.clubKey;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["clubName"] = v.clubName;
    j["inviterAccountId"] = v.inviterAccountId;
    j["status"] = v.status;
    j["inviterSummonerName"] = v.inviterSummonerName;
  }

  inline void from_json(const nlohmann::json& j, ClubInvite_t& v) {
    v.clubKey = j.at("clubKey").get<std::string>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>();
    v.clubName = j.at("clubName").get<std::string>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.status = j.at("status").get<ClubInviteStatus_t>();
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>();
  }
  inline std::string to_string(const ClubInvite_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
