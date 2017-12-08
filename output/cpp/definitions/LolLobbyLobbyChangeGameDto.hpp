#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace leagueapi {
  struct LolLobbyLobbyChangeGameDto_t {
    int32_t queueId;
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
    bool isCustom;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyChangeGameDto_t& v) {
    j["queueId"] = v.queueId;
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["isCustom"] = v.isCustom;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyChangeGameDto_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
    v.isCustom = j.at("isCustom").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyChangeGameDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
