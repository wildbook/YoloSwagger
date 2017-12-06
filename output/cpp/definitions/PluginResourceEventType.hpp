#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PluginResourceEventType_t {
    Delete_E = 2,
    Update_E = 1,
    Create_E = 0,
  };

  inline void to_json(nlohmann::json& j, const PluginResourceEventType_t& v) {
    switch(v) {
      case PluginResourceEventType_t::Delete_E:
        j = "Delete";
      break;
      case PluginResourceEventType_t::Update_E:
        j = "Update";
      break;
      case PluginResourceEventType_t::Create_E:
        j = "Create";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PluginResourceEventType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Delete"){
      v = PluginResourceEventType_t::Delete_E;
      return;
    }
    if(s == "Update"){
      v = PluginResourceEventType_t::Update_E;
      return;
    }
    if(s == "Create"){
      v = PluginResourceEventType_t::Create_E;
      return;
    }
  }
}
