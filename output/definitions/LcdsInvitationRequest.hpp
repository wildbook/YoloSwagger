#ifndef SWAGGER_TYPES_LcdsInvitationRequest_HPP
#define SWAGGER_TYPES_LcdsInvitationRequest_HPP
#include <json.hpp>
#include "LcdsPlayer.hpp"
#include "LcdsInviter.hpp"
#include "LcdsInvitationState.hpp"
namespace leagueapi {
  // 
  struct LcdsInvitationRequest {
    // 
    std::string gameMetaData;
    // 
    std::string invitationId;
    // 
    LcdsInvitationState invitationState;
    // 
    std::string invitePayload;
    // 
    std::string inviteType;
    // 
    LcdsInviter inviter;
    // 
    LcdsPlayer owner;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitationRequest& v) {
    j["gameMetaData"] = v.gameMetaData;
    j["invitationId"] = v.invitationId;
    j["invitationState"] = v.invitationState;
    j["invitePayload"] = v.invitePayload;
    j["inviteType"] = v.inviteType;
    j["inviter"] = v.inviter;
    j["owner"] = v.owner;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitationRequest& v) {
    v.gameMetaData = j.at("gameMetaData").get<std::string>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.invitationState = j.at("invitationState").get<LcdsInvitationState>;
    v.invitePayload = j.at("invitePayload").get<std::string>;
    v.inviteType = j.at("inviteType").get<std::string>;
    v.inviter = j.at("inviter").get<LcdsInviter>;
    v.owner = j.at("owner").get<LcdsPlayer>;
  }

}
#endif // SWAGGER_TYPES_LcdsInvitationRequest_HPP
