#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsPlayer.hpp"
#include "LcdsInvitee.hpp"
#include "LcdsMember.hpp"
namespace leagueapi {
  struct LcdsLobbyStatus_t {
    std::string gameMetaData;
    std::string invitationId;
    LcdsPlayer_t owner;
    std::vector<LcdsInvitee_t> invitees;
    std::string chatKey;
    std::vector<LcdsMember_t> members;
  };

  inline void to_json(nlohmann::json& j, const LcdsLobbyStatus_t& v) {
    j["gameMetaData"] = v.gameMetaData;
    j["invitationId"] = v.invitationId;
    j["owner"] = v.owner;
    j["invitees"] = v.invitees;
    j["chatKey"] = v.chatKey;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, LcdsLobbyStatus_t& v) {
    v.gameMetaData = j.at("gameMetaData").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee_t>>();
    v.chatKey = j.at("chatKey").get<std::string>();
    v.members = j.at("members").get<std::vector<LcdsMember_t>>();
  }
  inline std::string to_string(const LcdsLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
