#ifndef SWAGGER_TYPES_LolChatSessionState_HPP
#define SWAGGER_TYPES_LolChatSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatSessionState {
    // 
    connected = 1,
    // 
    disconnected = 3,
    // 
    initializing = 0,
    // 
    loaded = 2,
    // 
    shuttingdown = 4,
  };

  inline void to_json(nlohmann::json& j, const LolChatSessionState& v) {
    switch(v) {
      case LolChatSessionState::connected:
        j = "connected";
      break;
      case LolChatSessionState::disconnected:
        j = "disconnected";
      break;
      case LolChatSessionState::initializing:
        j = "initializing";
      break;
      case LolChatSessionState::loaded:
        j = "loaded";
      break;
      case LolChatSessionState::shuttingdown:
        j = "shuttingdown";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatSessionState& v) {
    const auto s& = j.get<std::string>();
    if(s == "connected"){
      v = LolChatSessionState::connected;
      return;
    }
    if(s == "disconnected"){
      v = LolChatSessionState::disconnected;
      return;
    }
    if(s == "initializing"){
      v = LolChatSessionState::initializing;
      return;
    }
    if(s == "loaded"){
      v = LolChatSessionState::loaded;
      return;
    }
    if(s == "shuttingdown"){
      v = LolChatSessionState::shuttingdown;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatSessionState_HPP
