#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsInvitationState.hpp"
#include "LcdsInviter.hpp"
#include "LcdsPlayer.hpp"
namespace leagueapi {
  struct LcdsInvitationRequest_t {
    LcdsInviter_t inviter;
    std::string invitePayload;
    std::string invitationId;
    std::string gameMetaData;
    std::string inviteType;
    LcdsInvitationState_t invitationState;
    LcdsPlayer_t owner;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationRequest_t& v) {
    j["inviter"] = v.inviter;
    j["invitePayload"] = v.invitePayload;
    j["invitationId"] = v.invitationId;
    j["gameMetaData"] = v.gameMetaData;
    j["inviteType"] = v.inviteType;
    j["invitationState"] = v.invitationState;
    j["owner"] = v.owner;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationRequest_t& v) {
    v.inviter = j.at("inviter").get<LcdsInviter_t>();
    v.invitePayload = j.at("invitePayload").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.inviteType = j.at("inviteType").get<std::string>();
    v.invitationState = j.at("invitationState").get<LcdsInvitationState_t>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
  }
}
