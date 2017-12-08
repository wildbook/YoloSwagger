#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayer.hpp"
#include "LcdsInvitee.hpp"
#include "LcdsMember.hpp"
namespace leagueapi {
  struct LcdsLobbyStatus_t {
    LcdsPlayer_t owner;
    std::string invitationId;
    std::vector<LcdsMember_t> members;
    std::string gameMetaData;
    std::string chatKey;
    std::vector<LcdsInvitee_t> invitees;
  };

  inline void to_json(nlohmann::json& j, const LcdsLobbyStatus_t& v) {
    j["owner"] = v.owner;
    j["invitationId"] = v.invitationId;
    j["members"] = v.members;
    j["gameMetaData"] = v.gameMetaData;
    j["chatKey"] = v.chatKey;
    j["invitees"] = v.invitees;
  }

  inline void from_json(const nlohmann::json& j, LcdsLobbyStatus_t& v) {
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.members = j.at("members").get<std::vector<LcdsMember_t>>();
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.chatKey = j.at("chatKey").get<std::string>();
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee_t>>();
  }
  inline std::string to_string(const LcdsLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
