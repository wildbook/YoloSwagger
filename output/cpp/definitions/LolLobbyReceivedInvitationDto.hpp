#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyReceivedInvitationGameConfigDto.hpp"
#include "LolLobbyEligibilityRestriction.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyReceivedInvitationDto_t {
    std::vector<LolLobbyEligibilityRestriction_t> restrictions;
    bool_t canAcceptInvitation;
    std::string_t timestamp;
    LolLobbyLobbyInvitationState_t state;
    LolLobbyReceivedInvitationGameConfigDto_t gameConfig;
    std::string_t invitationId;
    std::string_t fromSummonerName;
    uint64_t_t fromSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyReceivedInvitationDto_t& v) {
    j["restrictions"] = v.restrictions;
    j["canAcceptInvitation"] = v.canAcceptInvitation;
    j["timestamp"] = v.timestamp;
    j["state"] = v.state;
    j["gameConfig"] = v.gameConfig;
    j["invitationId"] = v.invitationId;
    j["fromSummonerName"] = v.fromSummonerName;
    j["fromSummonerId"] = v.fromSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyReceivedInvitationDto_t& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction_t>>();
    v.canAcceptInvitation = j.at("canAcceptInvitation").get<bool_t>();
    v.timestamp = j.at("timestamp").get<std::string_t>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.gameConfig = j.at("gameConfig").get<LolLobbyReceivedInvitationGameConfigDto_t>();
    v.invitationId = j.at("invitationId").get<std::string_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string_t>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbyReceivedInvitationDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
