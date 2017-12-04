#ifndef SWAGGER_TYPES_LolPlayerBehaviorNotificationSource_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorNotificationSource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPlayerBehaviorNotificationSource {
    // 
    Login = 1,
    // 
    Message = 3,
    // 
    Invalid = 0,
    // 
    ForcedShutdown = 2,
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorNotificationSource& v) {
    switch(v) {
      case LolPlayerBehaviorNotificationSource::Login:
        j = "Login";
      break;
      case LolPlayerBehaviorNotificationSource::Message:
        j = "Message";
      break;
      case LolPlayerBehaviorNotificationSource::Invalid:
        j = "Invalid";
      break;
      case LolPlayerBehaviorNotificationSource::ForcedShutdown:
        j = "ForcedShutdown";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorNotificationSource& v) {
    const auto& s = j.get<std::string>();
    if(s == "Login"){
      v = LolPlayerBehaviorNotificationSource::Login;
      return;
    }
    if(s == "Message"){
      v = LolPlayerBehaviorNotificationSource::Message;
      return;
    }
    if(s == "Invalid"){
      v = LolPlayerBehaviorNotificationSource::Invalid;
      return;
    }
    if(s == "ForcedShutdown"){
      v = LolPlayerBehaviorNotificationSource::ForcedShutdown;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorNotificationSource_HPP
