#ifndef SWAGGER_TYPES_LcdsLobbyStatus_HPP
#define SWAGGER_TYPES_LcdsLobbyStatus_HPP
#include <json.hpp>
#include "LcdsMember.hpp"
#include "LcdsInvitee.hpp"
#include "LcdsPlayer.hpp"
namespace leagueapi {
  // 
  struct LcdsLobbyStatus {
    // 
    std::string chatKey;
    // 
    std::string gameMetaData;
    // 
    std::string invitationId;
    // 
    std::vector<LcdsInvitee> invitees;
    // 
    std::vector<LcdsMember> members;
    // 
    LcdsPlayer owner;
  };

  void to_json(nlohmann::json& j, const LcdsLobbyStatus& v) {
    j["chatKey"] = v.chatKey;
    j["gameMetaData"] = v.gameMetaData;
    j["invitationId"] = v.invitationId;
    j["invitees"] = v.invitees;
    j["members"] = v.members;
    j["owner"] = v.owner;
  }

  void from_json(const nlohmann::json& j, LcdsLobbyStatus& v) {
    v.chatKey = j.at("chatKey").get<std::string>;
    v.gameMetaData = j.at("gameMetaData").get<std::string>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee>>;
    v.members = j.at("members").get<std::vector<LcdsMember>>;
    v.owner = j.at("owner").get<LcdsPlayer>;
  }

}
#endif // SWAGGER_TYPES_LcdsLobbyStatus_HPP
