#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyInviteDto_t {
    int32_t partyVersion;
    std::string state;
    LolLobbyGameModeDto_t gameMode;
    std::string partyId;
    std::string invitedByPuuid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyInviteDto_t& v) {
    j["partyVersion"] = v.partyVersion;
    j["state"] = v.state;
    j["gameMode"] = v.gameMode;
    j["partyId"] = v.partyId;
    j["invitedByPuuid"] = v.invitedByPuuid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyInviteDto_t& v) {
    v.partyVersion = j.at("partyVersion").get<int32_t>();
    v.state = j.at("state").get<std::string>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPartyInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
