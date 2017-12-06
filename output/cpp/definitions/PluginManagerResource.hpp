#pragma once
#include <json.hpp>
#include <optional>
#include "PluginManagerState.hpp"
namespace leagueapi {
  struct PluginManagerResource_t {
    PluginManagerState_t state;
  };

  inline void to_json(nlohmann::json& j, const PluginManagerResource_t& v) {
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, PluginManagerResource_t& v) {
    v.state = j.at("state").get<PluginManagerState_t>();
  }
}
