#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
namespace leagueapi {
  struct LolLobbyReceivedInvitationDto_t {
    LolLobbyReceivedInvitationGameConfigDto_t gameConfig;
    uint64_t fromSummonerId;
    LolLobbyLobbyInvitationState_t state;
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    std::string invitationId;
    std::string fromSummonerName;
    std::string timestamp;
    bool canAcceptInvitation;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationDto_t& v) {
    j["gameConfig"] = v.gameConfig;
    j["fromSummonerId"] = v.fromSummonerId;
    j["state"] = v.state;
    j["restrictions"] = v.restrictions;
    j["invitationId"] = v.invitationId;
    j["fromSummonerName"] = v.fromSummonerName;
    j["timestamp"] = v.timestamp;
    j["canAcceptInvitation"] = v.canAcceptInvitation;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationDto_t& v) {
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto_t>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>();
  }
}
