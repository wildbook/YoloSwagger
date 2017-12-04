#ifndef SWAGGER_TYPES_PluginResourceEventType_HPP
#define SWAGGER_TYPES_PluginResourceEventType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PluginResourceEventType {
    // 
    Create = 0,
    // 
    Update = 1,
    // 
    Delete = 2,
  };

  inline void to_json(nlohmann::json& j, const PluginResourceEventType& v) {
    switch(v) {
      case PluginResourceEventType::Create:
        j = "Create";
      break;
      case PluginResourceEventType::Update:
        j = "Update";
      break;
      case PluginResourceEventType::Delete:
        j = "Delete";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PluginResourceEventType& v) {
    const auto& s = j.get<std::string>();
    if(s == "Create"){
      v = PluginResourceEventType::Create;
      return;
    }
    if(s == "Update"){
      v = PluginResourceEventType::Update;
      return;
    }
    if(s == "Delete"){
      v = PluginResourceEventType::Delete;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PluginResourceEventType_HPP
