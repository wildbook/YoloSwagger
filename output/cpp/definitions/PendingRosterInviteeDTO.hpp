#ifndef SWAGGER_TYPES_PendingRosterInviteeDTO_HPP
#define SWAGGER_TYPES_PendingRosterInviteeDTO_HPP
#include <json.hpp>
#include "PendingRosterInviteeState.hpp"
namespace leagueapi {
  // 
  struct PendingRosterInviteeDTO {
    // 
    int64_t inviteTime;
    // 
    uint64_t inviter;
    // 
    uint64_t inviteeId;
    // 
    PendingRosterInviteeState inviteeState;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterInviteeDTO& v) {
    j["inviteTime"] = v.inviteTime;
    j["inviter"] = v.inviter;
    j["inviteeId"] = v.inviteeId;
    j["inviteeState"] = v.inviteeState;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterInviteeDTO& v) {
    v.inviteTime = j.at("inviteTime").get<int64_t>;
    v.inviter = j.at("inviter").get<uint64_t>;
    v.inviteeId = j.at("inviteeId").get<uint64_t>;
    v.inviteeState = j.at("inviteeState").get<PendingRosterInviteeState>;
  }

}
#endif // SWAGGER_TYPES_PendingRosterInviteeDTO_HPP
