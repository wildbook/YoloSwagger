#ifndef SWAGGER_TYPES_LolLobbyLobbyChangeQueue_HPP
#define SWAGGER_TYPES_LolLobbyLobbyChangeQueue_HPP
#include <json.hpp>
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace test {
  // 
  struct LolLobbyLobbyChangeQueue {
'    // 
    LolLobbyLobbyCustomGameLobby customGameLobby;
    // 
    bool isCustom;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyChangeQueue& v) {
    j["customGameLobby"] = v.customGameLobby;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyChangeQueue& v) {
    v.customGameLobby = j.at("customGameLobby").get<LolLobbyLobbyCustomGameLobby>;
    v.isCustom = j.at("isCustom").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyChangeQueue_HPP
