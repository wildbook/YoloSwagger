#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameModeDto.hpp"
namespace leagueapi {
  struct LolLobbyPartyInviteDto_t {
    std::string partyId;
    LolLobbyGameModeDto_t gameMode;
    std::string state;
    int32_t partyVersion;
    std::string invitedByPuuid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyInviteDto_t& v) {
    j["partyId"] = v.partyId;
    j["gameMode"] = v.gameMode;
    j["state"] = v.state;
    j["partyVersion"] = v.partyVersion;
    j["invitedByPuuid"] = v.invitedByPuuid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyInviteDto_t& v) {
    v.partyId = j.at("partyId").get<std::string>();
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto_t>();
    v.state = j.at("state").get<std::string>();
    v.partyVersion = j.at("partyVersion").get<int32_t>();
    v.invitedByPuuid = j.at("invitedByPuuid").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPartyInviteDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
