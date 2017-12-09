#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferencesEndpoint_t {
    bool Enabled;
    bool EnforceHttps;
    std::string Version;
    int64_t Retries;
    std::string ServiceEndpoint;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferencesEndpoint_t& v) {
    j["Enabled"] = v.Enabled;
    j["EnforceHttps"] = v.EnforceHttps;
    j["Version"] = v.Version;
    j["Retries"] = v.Retries;
    j["ServiceEndpoint"] = v.ServiceEndpoint;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferencesEndpoint_t& v) {
    v.Enabled = j.at("Enabled").get<bool>();
    v.EnforceHttps = j.at("EnforceHttps").get<bool>();
    v.Version = j.at("Version").get<std::string>();
    v.Retries = j.at("Retries").get<int64_t>();
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>();
  }
  inline std::string to_string(const PlayerPreferencesEndpoint_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
