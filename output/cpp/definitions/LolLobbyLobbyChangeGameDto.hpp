#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace leagueapi {
  struct LolLobbyLobbyChangeGameDto_t {
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
    bool isCustom;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyChangeGameDto_t& v) {
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyChangeGameDto_t& v) {
    if(auto it = j.find("customGameLobby"); it != j.end() !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
