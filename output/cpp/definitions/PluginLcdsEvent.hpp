#ifndef SWAGGER_TYPES_PluginLcdsEvent_HPP
#define SWAGGER_TYPES_PluginLcdsEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PluginLcdsEvent {
    // 
    nlohmann::json body;
    // 
    std::string typeName;
    // 
    std::string clientId;
    // 
    std::string subtopic;
  };

  inline void to_json(nlohmann::json& j, const PluginLcdsEvent& v) {
    j["body"] = v.body;
    j["typeName"] = v.typeName;
    j["clientId"] = v.clientId;
    j["subtopic"] = v.subtopic;
  }

  inline void from_json(const nlohmann::json& j, PluginLcdsEvent& v) {
    v.body = j.at("body").get<nlohmann::json>;
    v.typeName = j.at("typeName").get<std::string>;
    v.clientId = j.at("clientId").get<std::string>;
    v.subtopic = j.at("subtopic").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginLcdsEvent_HPP
