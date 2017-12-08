#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
namespace leagueapi {
  struct LolLobbyReceivedInvitationDto_t {
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    LolLobbyLobbyInvitationState_t state;
    std::string invitationId;
    bool canAcceptInvitation;
    std::string timestamp;
    LolLobbyReceivedInvitationGameConfigDto_t gameConfig;
    uint64_t fromSummonerId;
    std::string fromSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationDto_t& v) {
    j["restrictions"] = v.restrictions;
    j["state"] = v.state;
    j["invitationId"] = v.invitationId;
    j["canAcceptInvitation"] = v.canAcceptInvitation;
    j["timestamp"] = v.timestamp;
    j["gameConfig"] = v.gameConfig;
    j["fromSummonerId"] = v.fromSummonerId;
    j["fromSummonerName"] = v.fromSummonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationDto_t& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto_t>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
  }
  inline std::string to_string(const LolLobbyReceivedInvitationDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
