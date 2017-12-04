#ifndef SWAGGER_TYPES_PluginResourceEventType_HPP
#define SWAGGER_TYPES_PluginResourceEventType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PluginResourceEventType {
    // 
    Create = 0,
    // 
    Delete = 2,
    // 
    Update = 1,
  };

  void to_json(nlohmann::json& j, const PluginResourceEventType& v) {
    switch(v) {
      case PluginResourceEventType::Create:
        j = "Create";
      break;
      case PluginResourceEventType::Delete:
        j = "Delete";
      break;
      case PluginResourceEventType::Update:
        j = "Update";
      break;
    }
  }

  void from_json(const nlohmann::json& j, PluginResourceEventType& v) {
    const auto s& = j.get<std::string>();
    if(s == "Create"){
      v = PluginResourceEventType::Create;
      return;
    }
    if(s == "Delete"){
      v = PluginResourceEventType::Delete;
      return;
    }
    if(s == "Update"){
      v = PluginResourceEventType::Update;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PluginResourceEventType_HPP