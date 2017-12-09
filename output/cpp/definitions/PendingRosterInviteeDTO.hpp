#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterInviteeState.hpp"
namespace leagueapi {
  struct PendingRosterInviteeDTO_t {
    PendingRosterInviteeState_t inviteeState;
    uint64_t inviter;
    uint64_t inviteeId;
    int64_t inviteTime;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterInviteeDTO_t& v) {
    j["inviteeState"] = v.inviteeState;
    j["inviter"] = v.inviter;
    j["inviteeId"] = v.inviteeId;
    j["inviteTime"] = v.inviteTime;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterInviteeDTO_t& v) {
    v.inviteeState = j.at("inviteeState").get<PendingRosterInviteeState_t>();
    v.inviter = j.at("inviter").get<uint64_t>();
    v.inviteeId = j.at("inviteeId").get<uint64_t>();
    v.inviteTime = j.at("inviteTime").get<int64_t>();
  }
  inline std::string to_string(const PendingRosterInviteeDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
