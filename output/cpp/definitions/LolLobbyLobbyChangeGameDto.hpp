#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace leagueapi {
  struct LolLobbyLobbyChangeGameDto_t {
    bool_t isCustom;
    std::optional<LolLobbyLobbyCustomGameLobby_t> customGameLobby;
    int32_t_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyChangeGameDto_t& v) {
    j["isCustom"] = v.isCustom;
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyChangeGameDto_t& v) {
    v.isCustom = j.at("isCustom").get<bool_t>();
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<LolLobbyLobbyCustomGameLobby_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
  }
  inline std::string to_string(const LolLobbyLobbyChangeGameDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
