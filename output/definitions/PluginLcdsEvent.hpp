#ifndef SWAGGER_TYPES_PluginLcdsEvent_HPP
#define SWAGGER_TYPES_PluginLcdsEvent_HPP
#include <json.hpp>
namespace test {
  // 
  struct PluginLcdsEvent {
'    // 
    nlohmann::json body;
    // 
    std::string clientId;
    // 
    std::string subtopic;
    // 
    std::string typeName;
  };

  void to_json(nlohmann::json& j, const PluginLcdsEvent& v) {
    j["body"] = v.body;
    j["clientId"] = v.clientId;
    j["subtopic"] = v.subtopic;
    j["typeName"] = v.typeName;
  }

  void from_json(const nlohmann::json& j, PluginLcdsEvent& v) {
    v.body = j.at("body").get<nlohmann::json>;
    v.clientId = j.at("clientId").get<std::string>;
    v.subtopic = j.at("subtopic").get<std::string>;
    v.typeName = j.at("typeName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginLcdsEvent_HPP
