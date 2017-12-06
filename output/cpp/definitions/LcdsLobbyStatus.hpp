#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsMember.hpp"
#include "LcdsPlayer.hpp"
#include "LcdsInvitee.hpp"
namespace leagueapi {
  struct LcdsLobbyStatus_t {
    std::string chatKey;
    std::vector<LcdsInvitee_t> invitees;
    std::string invitationId;
    std::string gameMetaData;
    LcdsPlayer_t owner;
    std::vector<LcdsMember_t> members;
  };

  inline void to_json(nlohmann::json& j, const LcdsLobbyStatus_t& v) {
    j["chatKey"] = v.chatKey;
    j["invitees"] = v.invitees;
    j["invitationId"] = v.invitationId;
    j["gameMetaData"] = v.gameMetaData;
    j["owner"] = v.owner;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, LcdsLobbyStatus_t& v) {
    v.chatKey = j.at("chatKey").get<std::string>();
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee_t>>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.members = j.at("members").get<std::vector<LcdsMember_t>>();
  }
}
