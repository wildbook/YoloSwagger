#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPlayerBehaviorNotificationSource_t {
    ForcedShutdown_E = 2,
    Invalid_E = 0,
    Login_E = 1,
    Message_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorNotificationSource_t& v) {
    switch(v) {
      case LolPlayerBehaviorNotificationSource_t::ForcedShutdown_E:
        j = "ForcedShutdown";
      break;
      case LolPlayerBehaviorNotificationSource_t::Invalid_E:
        j = "Invalid";
      break;
      case LolPlayerBehaviorNotificationSource_t::Login_E:
        j = "Login";
      break;
      case LolPlayerBehaviorNotificationSource_t::Message_E:
        j = "Message";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorNotificationSource_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ForcedShutdown"){
      v = LolPlayerBehaviorNotificationSource_t::ForcedShutdown_E;
      return;
    }
    if(s == "Invalid"){
      v = LolPlayerBehaviorNotificationSource_t::Invalid_E;
      return;
    }
    if(s == "Login"){
      v = LolPlayerBehaviorNotificationSource_t::Login_E;
      return;
    }
    if(s == "Message"){
      v = LolPlayerBehaviorNotificationSource_t::Message_E;
      return;
    }
  }
}
