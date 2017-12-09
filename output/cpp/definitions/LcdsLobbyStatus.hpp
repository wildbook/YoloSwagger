#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsMember.hpp"
#include "LcdsPlayer.hpp"
#include "LcdsInvitee.hpp"
namespace leagueapi {
  struct LcdsLobbyStatus_t {
    std::string gameMetaData;
    LcdsPlayer_t owner;
    std::vector<LcdsInvitee_t> invitees;
    std::vector<LcdsMember_t> members;
    std::string chatKey;
    std::string invitationId;
  };

  inline void to_json(nlohmann::json& j, const LcdsLobbyStatus_t& v) {
    j["gameMetaData"] = v.gameMetaData;
    j["owner"] = v.owner;
    j["invitees"] = v.invitees;
    j["members"] = v.members;
    j["chatKey"] = v.chatKey;
    j["invitationId"] = v.invitationId;
  }

  inline void from_json(const nlohmann::json& j, LcdsLobbyStatus_t& v) {
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee_t>>();
    v.members = j.at("members").get<std::vector<LcdsMember_t>>();
    v.chatKey = j.at("chatKey").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
  }
  inline std::string to_string(const LcdsLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
