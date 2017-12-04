#ifndef SWAGGER_TYPES_ClubInvite_HPP
#define SWAGGER_TYPES_ClubInvite_HPP
#include <json.hpp>
#include "ClubInviteStatus.hpp"
namespace leagueapi {
  // 
  struct ClubInvite {
    // 
    ClubInviteStatus status;
    // 
    uint64_t inviteeAccountId;
    // 
    uint64_t inviterSummonerId;
    // 
    std::string clubKey;
    // 
    uint64_t inviteeSummonerId;
    // 
    std::string inviterSummonerName;
    // 
    std::string clubName;
    // 
    uint64_t inviterAccountId;
  };

  inline void to_json(nlohmann::json& j, const ClubInvite& v) {
    j["status"] = v.status;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["clubKey"] = v.clubKey;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterSummonerName"] = v.inviterSummonerName;
    j["clubName"] = v.clubName;
    j["inviterAccountId"] = v.inviterAccountId;
  }

  inline void from_json(const nlohmann::json& j, ClubInvite& v) {
    v.status = j.at("status").get<ClubInviteStatus>;
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>;
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>;
    v.clubKey = j.at("clubKey").get<std::string>;
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>;
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>;
    v.clubName = j.at("clubName").get<std::string>;
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_ClubInvite_HPP
