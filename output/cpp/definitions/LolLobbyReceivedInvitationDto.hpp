#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
namespace leagueapi {
  struct LolLobbyReceivedInvitationDto_t {
    std::string invitationId;
    uint64_t fromSummonerId;
    LolLobbyReceivedInvitationGameConfigDto_t gameConfig;
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    bool canAcceptInvitation;
    std::string timestamp;
    std::string fromSummonerName;
    LolLobbyLobbyInvitationState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationDto_t& v) {
    j["invitationId"] = v.invitationId;
    j["fromSummonerId"] = v.fromSummonerId;
    j["gameConfig"] = v.gameConfig;
    j["restrictions"] = v.restrictions;
    j["canAcceptInvitation"] = v.canAcceptInvitation;
    j["timestamp"] = v.timestamp;
    j["fromSummonerName"] = v.fromSummonerName;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationDto_t& v) {
    v.invitationId = j.at("invitationId").get<std::string>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto_t>();
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
  }
  inline std::string to_string(const LolLobbyReceivedInvitationDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
