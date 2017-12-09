#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayer.hpp"
#include "LcdsInvitationState.hpp"
#include "LcdsInviter.hpp"
namespace leagueapi {
  struct LcdsInvitationRequest_t {
    std::string gameMetaData;
    LcdsInviter_t inviter;
    LcdsInvitationState_t invitationState;
    std::string invitationId;
    LcdsPlayer_t owner;
    std::string invitePayload;
    std::string inviteType;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationRequest_t& v) {
    j["gameMetaData"] = v.gameMetaData;
    j["inviter"] = v.inviter;
    j["invitationState"] = v.invitationState;
    j["invitationId"] = v.invitationId;
    j["owner"] = v.owner;
    j["invitePayload"] = v.invitePayload;
    j["inviteType"] = v.inviteType;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationRequest_t& v) {
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.inviter = j.at("inviter").get<LcdsInviter_t>();
    v.invitationState = j.at("invitationState").get<LcdsInvitationState_t>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.invitePayload = j.at("invitePayload").get<std::string>();
    v.inviteType = j.at("inviteType").get<std::string>();
  }
  inline std::string to_string(const LcdsInvitationRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
