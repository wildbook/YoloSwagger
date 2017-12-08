#pragma once
#include <json.hpp>
#include <optional>
#include "ClubInviteStatus.hpp"
namespace leagueapi {
  struct ClubInvite_t {
    ClubInviteStatus_t status;
    uint64_t inviteeAccountId;
    uint64_t inviterAccountId;
    std::string inviterSummonerName;
    uint64_t inviteeSummonerId;
    uint64_t inviterSummonerId;
    std::string clubKey;
    std::string clubName;
  };

  inline void to_json(nlohmann::json& j, const ClubInvite_t& v) {
    j["status"] = v.status;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviterSummonerName"] = v.inviterSummonerName;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
  }

  inline void from_json(const nlohmann::json& j, ClubInvite_t& v) {
    v.status = j.at("status").get<ClubInviteStatus_t>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>();
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.clubName = j.at("clubName").get<std::string>();
  }
  inline std::string to_string(const ClubInvite_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
