#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsInvitee.hpp"
#include "LcdsMember.hpp"
#include "LcdsPlayer.hpp"
namespace leagueapi {
  struct LcdsLobbyStatus_t {
    std::string_t chatKey;
    std::string_t gameMetaData;
    std::string_t invitationId;
    std::vector<LcdsMember_t> members;
    LcdsPlayer_t owner;
    std::vector<LcdsInvitee_t> invitees;
  };

  inline void to_json(nlohmann::json& j, const LcdsLobbyStatus_t& v) {
    j["chatKey"] = v.chatKey;
    j["gameMetaData"] = v.gameMetaData;
    j["invitationId"] = v.invitationId;
    j["members"] = v.members;
    j["owner"] = v.owner;
    j["invitees"] = v.invitees;
  }

  inline void from_json(const nlohmann::json& j, LcdsLobbyStatus_t& v) {
    v.chatKey = j.at("chatKey").get<std::string_t>();
    v.gameMetaData = j.at("gameMetaData").get<std::string_t>();
    v.invitationId = j.at("invitationId").get<std::string_t>();
    v.members = j.at("members").get<std::vector<LcdsMember_t>>();
    v.owner = j.at("owner").get<LcdsPlayer_t>();
    v.invitees = j.at("invitees").get<std::vector<LcdsInvitee_t>>();
  }
  inline std::string to_string(const LcdsLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
