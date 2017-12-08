#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameflowGameDodge.hpp"
#include "LolLobbyGameflowGameClient.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace leagueapi {
  struct LolLobbyGameflowSession_t {
    LolLobbyGameflowGameClient_t gameClient;
    LolLobbyGameflowPhase_t phase;
    LolLobbyGameflowGameDodge_t gameDodge;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowSession_t& v) {
    j["gameClient"] = v.gameClient;
    j["phase"] = v.phase;
    j["gameDodge"] = v.gameDodge;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowSession_t& v) {
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient_t>();
    v.phase = j.at("phase").get<LolLobbyGameflowPhase_t>();
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge_t>();
  }
  inline std::string to_string(const LolLobbyGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
