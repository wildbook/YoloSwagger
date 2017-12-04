#ifndef SWAGGER_TYPES_LolPlayerBehaviorNotificationSource_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorNotificationSource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPlayerBehaviorNotificationSource {
    // 
    ForcedShutdown = 2,
    // 
    Invalid = 0,
    // 
    Login = 1,
    // 
    Message = 3,
  };

  void to_json(nlohmann::json& j, const LolPlayerBehaviorNotificationSource& v) {
    switch(v) {
      case LolPlayerBehaviorNotificationSource::ForcedShutdown:
        j = "ForcedShutdown";
      break;
      case LolPlayerBehaviorNotificationSource::Invalid:
        j = "Invalid";
      break;
      case LolPlayerBehaviorNotificationSource::Login:
        j = "Login";
      break;
      case LolPlayerBehaviorNotificationSource::Message:
        j = "Message";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolPlayerBehaviorNotificationSource& v) {
    const auto s& = j.get<std::string>();
    if(s == "ForcedShutdown"){
      v = LolPlayerBehaviorNotificationSource::ForcedShutdown;
      return;
    }
    if(s == "Invalid"){
      v = LolPlayerBehaviorNotificationSource::Invalid;
      return;
    }
    if(s == "Login"){
      v = LolPlayerBehaviorNotificationSource::Login;
      return;
    }
    if(s == "Message"){
      v = LolPlayerBehaviorNotificationSource::Message;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorNotificationSource_HPP
