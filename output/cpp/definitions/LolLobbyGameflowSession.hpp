#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameflowGameDodge.hpp"
#include "LolLobbyGameflowGameClient.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace leagueapi {
  struct LolLobbyGameflowSession_t {
    LolLobbyGameflowGameDodge_t gameDodge;
    LolLobbyGameflowPhase_t phase;
    LolLobbyGameflowGameClient_t gameClient;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowSession_t& v) {
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowSession_t& v) {
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge_t>();
    v.phase = j.at("phase").get<LolLobbyGameflowPhase_t>();
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient_t>();
  }
  inline std::string to_string(const LolLobbyGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
