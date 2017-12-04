#ifndef SWAGGER_TYPES_PluginResourceContract_HPP
#define SWAGGER_TYPES_PluginResourceContract_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PluginResourceContract {
    // 
    std::string fullName;
    // 
    std::string version;
  };

  void to_json(nlohmann::json& j, const PluginResourceContract& v) {
    j["fullName"] = v.fullName;
    j["version"] = v.version;
  }

  void from_json(const nlohmann::json& j, PluginResourceContract& v) {
    v.fullName = j.at("fullName").get<std::string>;
    v.version = j.at("version").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginResourceContract_HPP
