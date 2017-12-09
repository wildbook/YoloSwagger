#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyInviteDto_t {
    LolLobbyGameModeDto_t gameMode;
    int32_t partyVersion;
    std::string partyId;
    std::string state;
    std::string invitedByPuuid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyInviteDto_t& v) {
    j["gameMode"] = v.gameMode;
    j["partyVersion"] = v.partyVersion;
    j["partyId"] = v.partyId;
    j["state"] = v.state;
    j["invitedByPuuid"] = v.invitedByPuuid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyInviteDto_t& v) {
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.partyVersion = j.at("partyVersion").get<int32_t>();
    v.partyId = j.at("partyId").get<std::string>();
    v.state = j.at("state").get<std::string>();
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPartyInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
