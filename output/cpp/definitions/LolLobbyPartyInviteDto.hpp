#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyInviteDto_t {
    LolLobbyGameModeDto_t gameMode;
    std::string invitedByPuuid;
    std::string partyId;
    int32_t partyVersion;
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyInviteDto_t& v) {
    j["gameMode"] = v.gameMode;
    j["invitedByPuuid"] = v.invitedByPuuid;
    j["partyId"] = v.partyId;
    j["partyVersion"] = v.partyVersion;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyInviteDto_t& v) {
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>();
    v.partyId = j.at("partyId").get<std::string>();
    v.partyVersion = j.at("partyVersion").get<int32_t>();
    v.state = j.at("state").get<std::string>();
  }
}
