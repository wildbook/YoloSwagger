#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterInviteeState.hpp"
namespace leagueapi {
  struct PendingRosterInviteeDTO_t {
    int64_t inviteTime;
    uint64_t inviter;
    uint64_t inviteeId;
    PendingRosterInviteeState_t inviteeState;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterInviteeDTO_t& v) {
    j["inviteTime"] = v.inviteTime;
    j["inviter"] = v.inviter;
    j["inviteeId"] = v.inviteeId;
    j["inviteeState"] = v.inviteeState;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterInviteeDTO_t& v) {
    v.inviteTime = j.at("inviteTime").get<int64_t>();
    v.inviter = j.at("inviter").get<uint64_t>();
    v.inviteeId = j.at("inviteeId").get<uint64_t>();
    v.inviteeState = j.at("inviteeState").get<PendingRosterInviteeState_t>();
  }
  inline std::string to_string(const PendingRosterInviteeDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
