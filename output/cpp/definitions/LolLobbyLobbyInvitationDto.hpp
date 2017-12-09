#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitationDto_t {
    uint64_t toSummonerId;
    std::string timestamp;
    std::string invitationId;
    LolLobbyLobbyInvitationState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitationDto_t& v) {
    j["toSummonerId"] = v.toSummonerId;
    j["timestamp"] = v.timestamp;
    j["invitationId"] = v.invitationId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitationDto_t& v) {
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
  }
  inline std::string to_string(const LolLobbyLobbyInvitationDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
