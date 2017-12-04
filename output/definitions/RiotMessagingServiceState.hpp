#ifndef SWAGGER_TYPES_RiotMessagingServiceState_HPP
#define SWAGGER_TYPES_RiotMessagingServiceState_HPP
#include <json.hpp>
namespace test {
  // 
  enum class RiotMessagingServiceState {
'    // 
    Connected = 5,
    // 
    Connecting = 3,
    // 
    Disconnected = 1,
    // 
    Disconnecting = 0,
  };

  void to_json(nlohmann::json& j, const RiotMessagingServiceState& v) {
    switch(v) {
      case RiotMessagingServiceState::Connected:
        j = "Connected";
      break;
      case RiotMessagingServiceState::Connecting:
        j = "Connecting";
      break;
      case RiotMessagingServiceState::Disconnected:
        j = "Disconnected";
      break;
      case RiotMessagingServiceState::Disconnecting:
        j = "Disconnecting";
      break;
    }
  }

  void from_json(const nlohmann::json& j, RiotMessagingServiceState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Connected"){
      v = RiotMessagingServiceState::Connected;
      return;
    }
    if(s == "Connecting"){
      v = RiotMessagingServiceState::Connecting;
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
