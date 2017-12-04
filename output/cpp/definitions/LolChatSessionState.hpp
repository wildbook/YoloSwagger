#ifndef SWAGGER_TYPES_LolChatSessionState_HPP
#define SWAGGER_TYPES_LolChatSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatSessionState {
    // 
    loaded = 2,
    // 
    connected = 1,
    // 
    disconnected = 3,
    // 
    shuttingdown = 4,
    // 
    initializing = 0,
  };

  inline void to_json(nlohmann::json& j, const LolChatSessionState& v) {
    switch(v) {
      case LolChatSessionState::loaded:
        j = "loaded";
      break;
      case LolChatSessionState::connected:
        j = "connected";
      break;
      case LolChatSessionState::disconnected:
        j = "disconnected";
      break;
      case LolChatSessionState::shuttingdown:
        j = "shuttingdown";
      break;
      case LolChatSessionState::initializing:
        j = "initializing";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "loaded"){
      v = LolChatSessionState::loaded;
      return;
    }
    if(s == "connected"){
      v = LolChatSessionState::connected;
      return;
    }
    if(s == "disconnected"){
      v = LolChatSessionState::disconnected;
      return;
    }
    if(s == "shuttingdown"){
      v = LolChatSessionState::shuttingdown;
      return;
    }
    if(s == "initializing"){
      v = LolChatSessionState::initializing;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatSessionState_HPP
