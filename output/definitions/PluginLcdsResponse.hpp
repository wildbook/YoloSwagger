#ifndef SWAGGER_TYPES_PluginLcdsResponse_HPP
#define SWAGGER_TYPES_PluginLcdsResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PluginLcdsResponse {
    // 
    nlohmann::json body;
    // 
    std::string typeName;
  };

  void to_json(nlohmann::json& j, const PluginLcdsResponse& v) {
    j["body"] = v.body;
    j["typeName"] = v.typeName;
  }

  void from_json(const nlohmann::json& j, PluginLcdsResponse& v) {
    v.body = j.at("body").get<nlohmann::json>;
    v.typeName = j.at("typeName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginLcdsResponse_HPP
