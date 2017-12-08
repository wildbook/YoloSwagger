#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomFailedPlayer.hpp"
namespace leagueapi {
  struct LolLobbyLobbyCustomChampSelectStartResponse_t {
    bool success;
    std::vector<LolLobbyLobbyCustomFailedPlayer_t> failedPlayers;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomChampSelectStartResponse_t& v) {
    j["success"] = v.success;
    j["failedPlayers"] = v.failedPlayers;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomChampSelectStartResponse_t& v) {
    v.success = j.at("success").get<bool>();
    v.failedPlayers = j.at("failedPlayers").get<std::vector<LolLobbyLobbyCustomFailedPlayer_t>>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomChampSelectStartResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
