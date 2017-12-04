#ifndef SWAGGER_TYPES_PluginManagerState_HPP
#define SWAGGER_TYPES_PluginManagerState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PluginManagerState {
    // 
    NotReady = 0,
    // 
    PluginsInitialized = 1,
  };

  inline void to_json(nlohmann::json& j, const PluginManagerState& v) {
    switch(v) {
      case PluginManagerState::NotReady:
        j = "NotReady";
      break;
      case PluginManagerState::PluginsInitialized:
        j = "PluginsInitialized";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PluginManagerState& v) {
    const auto s& = j.get<std::string>();
    if(s == "NotReady"){
      v = PluginManagerState::NotReady;
      return;
    }
    if(s == "PluginsInitialized"){
      v = PluginManagerState::PluginsInitialized;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PluginManagerState_HPP
