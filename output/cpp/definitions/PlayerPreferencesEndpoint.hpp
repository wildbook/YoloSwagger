#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferencesEndpoint_t {
    bool Enabled;
    bool EnforceHttps;
    int64_t Retries;
    std::string ServiceEndpoint;
    std::string Version;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferencesEndpoint_t& v) {
    j["Enabled"] = v.Enabled;
    j["EnforceHttps"] = v.EnforceHttps;
    j["Retries"] = v.Retries;
    j["ServiceEndpoint"] = v.ServiceEndpoint;
    j["Version"] = v.Version;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferencesEndpoint_t& v) {
    v.Enabled = j.at("Enabled").get<bool>();
    v.EnforceHttps = j.at("EnforceHttps").get<bool>();
    v.Retries = j.at("Retries").get<int64_t>();
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>();
    v.Version = j.at("Version").get<std::string>();
  }
}
