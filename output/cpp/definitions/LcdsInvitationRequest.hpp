#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayer.hpp"
#include "LcdsInvitationState.hpp"
#include "LcdsInviter.hpp"
namespace leagueapi {
  struct LcdsInvitationRequest_t {
    std::string gameMetaData;
    LcdsPlayer_t owner;
    LcdsInvitationState_t invitationState;
    std::string invitationId;
    LcdsInviter_t inviter;
    std::string inviteType;
    std::string invitePayload;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationRequest_t& v) {
    j["gameMetaData"] = v.gameMetaData;
    j["owner"] = v.owner;
    j["invitationState"] = v.invitationState;
    j["invitationId"] = v.invitationId;
    j["inviter"] = v.inviter;
    j["inviteType"] = v.inviteType;
    j["invitePayload"] = v.invitePayload;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationRequest_t& v) {
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.invitationState = j.at("invitationState").get<LcdsInvitationState_t>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.inviter = j.at("inviter").get<LcdsInviter_t>();
    v.inviteType = j.at("inviteType").get<std::string>();
    v.invitePayload = j.at("invitePayload").get<std::string>();
  }
  inline std::string to_string(const LcdsInvitationRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
