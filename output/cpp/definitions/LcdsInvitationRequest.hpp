#ifndef SWAGGER_TYPES_LcdsInvitationRequest_HPP
#define SWAGGER_TYPES_LcdsInvitationRequest_HPP
#include <json.hpp>
#include "LcdsInviter.hpp"
#include "LcdsInvitationState.hpp"
#include "LcdsPlayer.hpp"
namespace leagueapi {
  // 
  struct LcdsInvitationRequest {
    // 
    std::string inviteType;
    // 
    LcdsInvitationState invitationState;
    // 
    std::string invitePayload;
    // 
    std::string gameMetaData;
    // 
    std::string invitationId;
    // 
    LcdsPlayer owner;
    // 
    LcdsInviter inviter;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationRequest& v) {
    j["inviteType"] = v.inviteType;
    j["invitationState"] = v.invitationState;
    j["invitePayload"] = v.invitePayload;
    j["gameMetaData"] = v.gameMetaData;
    j["invitationId"] = v.invitationId;
    j["owner"] = v.owner;
    j["inviter"] = v.inviter;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationRequest& v) {
    v.inviteType = j.at("inviteType").get<std::string>;
    v.invitationState = j.at("invitationState").get<LcdsInvitationState>;
    v.invitePayload = j.at("invitePayload").get<std::string>;
    v.gameMetaData = j.at("gameMetaData").get<std::string>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.owner = j.at("owner").get<LcdsPlayer>;
    v.inviter = j.at("inviter").get<LcdsInviter>;
  }

}
#endif // SWAGGER_TYPES_LcdsInvitationRequest_HPP
