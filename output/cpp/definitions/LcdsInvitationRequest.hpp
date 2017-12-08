#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayer.hpp"
#include "LcdsInvitationState.hpp"
#include "LcdsInviter.hpp"
namespace leagueapi {
  struct LcdsInvitationRequest_t {
    LcdsPlayer_t owner;
    std::string inviteType;
    LcdsInviter_t inviter;
    std::string invitationId;
    std::string gameMetaData;
    std::string invitePayload;
    LcdsInvitationState_t invitationState;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationRequest_t& v) {
    j["owner"] = v.owner;
    j["inviteType"] = v.inviteType;
    j["inviter"] = v.inviter;
    j["invitationId"] = v.invitationId;
    j["gameMetaData"] = v.gameMetaData;
    j["invitePayload"] = v.invitePayload;
    j["invitationState"] = v.invitationState;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationRequest_t& v) {
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.inviteType = j.at("inviteType").get<std::string>();
    v.inviter = j.at("inviter").get<LcdsInviter_t>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.invitePayload = j.at("invitePayload").get<std::string>();
    v.invitationState = j.at("invitationState").get<LcdsInvitationState_t>();
  }
  inline std::string to_string(const LcdsInvitationRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
