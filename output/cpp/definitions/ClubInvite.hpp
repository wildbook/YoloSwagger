#pragma once
#include <json.hpp>
#include <optional>
#include "ClubInviteStatus.hpp"
namespace leagueapi {
  struct ClubInvite_t {
    ClubInviteStatus_t status;
    uint64_t_t inviteeAccountId;
    uint64_t_t inviterSummonerId;
    std::string_t clubKey;
    uint64_t_t inviteeSummonerId;
    std::string_t inviterSummonerName;
    std::string_t clubName;
    uint64_t_t inviterAccountId;
  };

  inline void to_json(nlohmann::json& j, const ClubInvite_t& v) {
    j["status"] = v.status;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["clubKey"] = v.clubKey;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterSummonerName"] = v.inviterSummonerName;
    j["clubName"] = v.clubName;
    j["inviterAccountId"] = v.inviterAccountId;
  }

  inline void from_json(const nlohmann::json& j, ClubInvite_t& v) {
    v.status = j.at("status").get<ClubInviteStatus_t>();
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t_t>();
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t_t>();
    v.clubKey = j.at("clubKey").get<std::string_t>();
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t_t>();
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string_t>();
    v.clubName = j.at("clubName").get<std::string_t>();
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t_t>();
  }
  inline std::string to_string(const ClubInvite_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
