#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferencesEndpoint_t {
    bool EnforceHttps;
    std::string Version;
    bool Enabled;
    std::string ServiceEndpoint;
    int64_t Retries;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferencesEndpoint_t& v) {
    j["EnforceHttps"] = v.EnforceHttps;
    j["Version"] = v.Version;
    j["Enabled"] = v.Enabled;
    j["ServiceEndpoint"] = v.ServiceEndpoint;
    j["Retries"] = v.Retries;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferencesEndpoint_t& v) {
    v.EnforceHttps = j.at("EnforceHttps").get<bool>();
    v.Version = j.at("Version").get<std::string>();
    v.Enabled = j.at("Enabled").get<bool>();
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>();
    v.Retries = j.at("Retries").get<int64_t>();
  }
  inline std::string to_string(const PlayerPreferencesEndpoint_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
