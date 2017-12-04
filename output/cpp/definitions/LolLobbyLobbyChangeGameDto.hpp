#ifndef SWAGGER_TYPES_LolLobbyLobbyChangeGameDto_HPP
#define SWAGGER_TYPES_LolLobbyLobbyChangeGameDto_HPP
#include <json.hpp>
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyChangeGameDto {
    // 
    bool isCustom;
    // 
    LolLobbyLobbyCustomGameLobby customGameLobby;
    // 
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyChangeGameDto& v) {
    j["isCustom"] = v.isCustom;
    j["customGameLobby"] = v.customGameLobby;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyChangeGameDto& v) {
    v.isCustom = j.at("isCustom").get<bool>;
    v.customGameLobby = j.at("customGameLobby").get<LolLobbyLobbyCustomGameLobby>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyChangeGameDto_HPP
