#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameflowGameDodge.hpp"
#include "LolLobbyGameflowPhase.hpp"
#include "LolLobbyGameflowGameClient.hpp"
namespace leagueapi {
  struct LolLobbyGameflowSession_t {
    LolLobbyGameflowGameDodge_t gameDodge;
    LolLobbyGameflowGameClient_t gameClient;
    LolLobbyGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowSession_t& v) {
    j["gameDodge"] = v.gameDodge;
    j["gameClient"] = v.gameClient;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowSession_t& v) {
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge_t>();
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient_t>();
    v.phase = j.at("phase").get<LolLobbyGameflowPhase_t>();
  }
  inline std::string to_string(const LolLobbyGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
