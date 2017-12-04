#ifndef SWAGGER_TYPES_RiotMessagingServiceState_HPP
#define SWAGGER_TYPES_RiotMessagingServiceState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class RiotMessagingServiceState {
    // 
    Connecting = 3,
    // 
    Connected = 5,
    // 
    Disconnected = 1,
    // 
    Disconnecting = 0,
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceState& v) {
    switch(v) {
      case RiotMessagingServiceState::Connecting:
        j = "Connecting";
      break;
      case RiotMessagingServiceState::Connected:
        j = "Connected";
      break;
      case RiotMessagingServiceState::Disconnected:
        j = "Disconnected";
      break;
      case RiotMessagingServiceState::Disconnecting:
        j = "Disconnecting";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceState& v) {
    const auto& s = j.get<std::string>();
    if(s == "Connecting"){
      v = RiotMessagingServiceState::Connecting;
      return;
    }
    if(s == "Connected"){
      v = RiotMessagingServiceState::Connected;
      return;
    }
    if(s == "Disconnected"){
      v = RiotMessagingServiceState::Disconnected;
      return;
    }
    if(s == "Disconnecting"){
      v = RiotMessagingServiceState::Disconnecting;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RiotMessagingServiceState_HPP