#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayer.hpp"
#include "LcdsInviter.hpp"
#include "LcdsInvitationState.hpp"
namespace leagueapi {
  struct LcdsInvitationRequest_t {
    std::string gameMetaData;
    std::string invitationId;
    LcdsInvitationState_t invitationState;
    std::string invitePayload;
    std::string inviteType;
    LcdsInviter_t inviter;
    LcdsPlayer_t owner;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationRequest_t& v) {
    j["gameMetaData"] = v.gameMetaData;
    j["invitationId"] = v.invitationId;
    j["invitationState"] = v.invitationState;
    j["invitePayload"] = v.invitePayload;
    j["inviteType"] = v.inviteType;
    j["inviter"] = v.inviter;
    j["owner"] = v.owner;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationRequest_t& v) {
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.invitationState = j.at("invitationState").get<LcdsInvitationState_t>();
    v.invitePayload = j.at("invitePayload").get<std::string>();
    v.inviteType = j.at("inviteType").get<std::string>();
    v.inviter = j.at("inviter").get<LcdsInviter_t>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
  }
}
