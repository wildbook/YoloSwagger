#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitationDto_t {
    uint64_t toSummonerId;
    LolLobbyLobbyInvitationState_t state;
    std::string invitationId;
    std::string timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitationDto_t& v) {
    j["toSummonerId"] = v.toSummonerId;
    j["state"] = v.state;
    j["invitationId"] = v.invitationId;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitationDto_t& v) {
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.timestamp = j.at("timestamp").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyInvitationDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
