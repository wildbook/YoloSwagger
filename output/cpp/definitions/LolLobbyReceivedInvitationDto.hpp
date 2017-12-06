#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
namespace leagueapi {
  struct LolLobbyReceivedInvitationDto_t {
    bool canAcceptInvitation;
    uint64_t fromSummonerId;
    std::string fromSummonerName;
    LolLobbyReceivedInvitationGameConfigDto_t gameConfig;
    std::string invitationId;
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    LolLobbyLobbyInvitationState_t state;
    std::string timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationDto_t& v) {
    j["canAcceptInvitation"] = v.canAcceptInvitation;
    j["fromSummonerId"] = v.fromSummonerId;
    j["fromSummonerName"] = v.fromSummonerName;
    j["gameConfig"] = v.gameConfig;
    j["invitationId"] = v.invitationId;
    j["restrictions"] = v.restrictions;
    j["state"] = v.state;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationDto_t& v) {
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto_t>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.timestamp = j.at("timestamp").get<std::string>();
  }
}
