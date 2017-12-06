#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomFailedPlayer.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomChampSelectStartResponse_t {
    std::vector<LolLobbyLobbyCustomFailedPlayer_t> failedPlayers;
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomChampSelectStartResponse_t& v) {
    j["failedPlayers"] = v.failedPlayers;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomChampSelectStartResponse_t& v) {
    v.failedPlayers = j.at("failedPlayers").get<std::vector<LolLobbyLobbyCustomFailedPlayer_t>>();
    v.success = j.at("success").get<bool>();
  }
}
