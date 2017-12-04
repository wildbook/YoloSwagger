#ifndef SWAGGER_TYPES_PlayerPreferencesEndpoint_HPP
#define SWAGGER_TYPES_PlayerPreferencesEndpoint_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerPreferencesEndpoint {
    // 
    bool Enabled;
    // 
    bool EnforceHttps;
    // 
    int64_t Retries;
    // 
    std::string ServiceEndpoint;
    // 
    std::string Version;
  };

  void to_json(nlohmann::json& j, const PlayerPreferencesEndpoint& v) {
    j["Enabled"] = v.Enabled;
    j["EnforceHttps"] = v.EnforceHttps;
    j["Retries"] = v.Retries;
    j["ServiceEndpoint"] = v.ServiceEndpoint;
    j["Version"] = v.Version;
  }

  void from_json(const nlohmann::json& j, PlayerPreferencesEndpoint& v) {
    v.Enabled = j.at("Enabled").get<bool>;
    v.EnforceHttps = j.at("EnforceHttps").get<bool>;
    v.Retries = j.at("Retries").get<int64_t>;
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>;
    v.Version = j.at("Version").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerPreferencesEndpoint_HPP
