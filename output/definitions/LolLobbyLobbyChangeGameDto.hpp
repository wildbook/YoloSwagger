#ifndef SWAGGER_TYPES_LolLobbyLobbyChangeGameDto_HPP
#define SWAGGER_TYPES_LolLobbyLobbyChangeGameDto_HPP
#include <json.hpp>
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyChangeGameDto {
    // 
    LolLobbyLobbyCustomGameLobby customGameLobby;
    // 
    bool isCustom;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyChangeGameDto& v) {
    j["customGameLobby"] = v.customGameLobby;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyChangeGameDto& v) {
    v.customGameLobby = j.at("customGameLobby").get<LolLobbyLobbyCustomGameLobby>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyChangeGameDto_HPP
