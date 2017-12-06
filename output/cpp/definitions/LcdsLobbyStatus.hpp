#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayer.hpp"
#include "LcdsInvitee.hpp"
#include "LcdsMember.hpp"
namespace leagueapi {
  struct LcdsLobbyStatus_t {
    std::string chatKey;
    std::string gameMetaData;
    std::string invitationId;
    std::vector<LcdsInvitee_t> invitees;
    std::vector<LcdsMember_t> members;
    LcdsPlayer_t owner;
  };

  inline void to_json(nlohmann::json& j, const LcdsLobbyStatus_t& v) {
    j["chatKey"] = v.chatKey;
    j["gameMetaData"] = v.gameMetaData;
    j["invitationId"] = v.invitationId;
    j["invitees"] = v.invitees;
    j["members"] = v.members;
    j["owner"] = v.owner;
  }

  inline void from_json(const nlohmann::json& j, LcdsLobbyStatus_t& v) {
    v.chatKey = j.at("chatKey").get<std::string>();
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee_t>>();
    v.members = j.at("members").get<std::vector<LcdsMember_t>>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
  }
}
