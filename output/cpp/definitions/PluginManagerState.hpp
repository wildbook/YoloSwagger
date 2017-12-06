#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PluginManagerState_t {
    NotReady_E = 0,
    PluginsInitialized_E = 1,
  };

  inline void to_json(nlohmann::json& j, const PluginManagerState_t& v) {
    switch(v) {
      case PluginManagerState_t::NotReady_E:
        j = "NotReady";
      break;
      case PluginManagerState_t::PluginsInitialized_E:
        j = "PluginsInitialized";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PluginManagerState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "NotReady"){
      v = PluginManagerState_t::NotReady_E;
      return;
    }
    if(s == "PluginsInitialized"){
      v = PluginManagerState_t::PluginsInitialized_E;
      return;
    }
  }
}
