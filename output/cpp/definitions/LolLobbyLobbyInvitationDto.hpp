#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitationDto_t {
    std::string invitationId;
    LolLobbyLobbyInvitationState_t state;
    std::string timestamp;
    uint64_t toSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitationDto_t& v) {
    j["invitationId"] = v.invitationId;
    j["state"] = v.state;
    j["timestamp"] = v.timestamp;
    j["toSummonerId"] = v.toSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitationDto_t& v) {
    v.invitationId = j.at("invitationId").get<std::string>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
  }
}
