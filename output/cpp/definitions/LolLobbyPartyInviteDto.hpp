#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyInviteDto_t {
    std::string invitedByPuuid;
    std::string partyId;
    std::string state;
    LolLobbyGameModeDto_t gameMode;
    int32_t partyVersion;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyInviteDto_t& v) {
    j["invitedByPuuid"] = v.invitedByPuuid;
    j["partyId"] = v.partyId;
    j["state"] = v.state;
    j["gameMode"] = v.gameMode;
    j["partyVersion"] = v.partyVersion;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyInviteDto_t& v) {
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>();
    v.partyId = j.at("partyId").get<std::string>();
    v.state = j.at("state").get<std::string>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.partyVersion = j.at("partyVersion").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyPartyInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
