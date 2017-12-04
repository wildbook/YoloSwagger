#ifndef SWAGGER_TYPES_ClubInvite_HPP
#define SWAGGER_TYPES_ClubInvite_HPP
#include <json.hpp>
#include "ClubInviteStatus.hpp"
namespace test {
  // 
  struct ClubInvite {
'    // 
    std::string clubKey;
    // 
    std::string clubName;
    // 
    uint64_t inviteeAccountId;
    // 
    uint64_t inviteeSummonerId;
    // 
    uint64_t inviterAccountId;
    // 
    uint64_t inviterSummonerId;
    // 
    std::string inviterSummonerName;
    // 
    ClubInviteStatus status;
  };

  void to_json(nlohmann::json& j, const ClubInvite& v) {
    j["clubKey"] = v.clubKey;
    j["clubName"] = v.clubName;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterAccountId"] = v.inviterAccountId;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["inviterSummonerName"] = v.inviterSummonerName;
    j["status"] = v.status;
  }

  void from_json(const nlohmann::json& j, ClubInvite& v) {
    v.clubKey = j.at("clubKey").get<std::string>;
    v.clubName = j.at("clubName").get<std::string>;
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>;
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>;
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>;
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>;
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>;
    v.status = j.at("status").get<ClubInviteStatus>;
  }

}
#endif // SWAGGER_TYPES_ClubInvite_HPP
