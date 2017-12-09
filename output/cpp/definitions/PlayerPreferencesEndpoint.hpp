#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferencesEndpoint_t {
    int64_t Retries;
    std::string Version;
    bool EnforceHttps;
    std::string ServiceEndpoint;
    bool Enabled;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferencesEndpoint_t& v) {
    j["Retries"] = v.Retries;
    j["Version"] = v.Version;
    j["EnforceHttps"] = v.EnforceHttps;
    j["ServiceEndpoint"] = v.ServiceEndpoint;
    j["Enabled"] = v.Enabled;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferencesEndpoint_t& v) {
    v.Retries = j.at("Retries").get<int64_t>();
    v.Version = j.at("Version").get<std::string>();
    v.EnforceHttps = j.at("EnforceHttps").get<bool>();
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>();
    v.Enabled = j.at("Enabled").get<bool>();
  }
  inline std::string to_string(const PlayerPreferencesEndpoint_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
