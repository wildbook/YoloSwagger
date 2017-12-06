#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace leagueapi {
  struct LolLobbyLobbyChangeGameDto_t {
    bool isCustom;
    int32_t queueId;
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyChangeGameDto_t& v) {
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyChangeGameDto_t& v) {
    v.isCustom = j.at("isCustom").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    if(auto it = j.find("customGameLobby"); it != j.end() !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
  }
}
