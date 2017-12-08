#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferencesEndpoint_t {
    std::string ServiceEndpoint;
    bool Enabled;
    std::string Version;
    int64_t Retries;
    bool EnforceHttps;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferencesEndpoint_t& v) {
    j["ServiceEndpoint"] = v.ServiceEndpoint;
    j["Enabled"] = v.Enabled;
    j["Version"] = v.Version;
    j["Retries"] = v.Retries;
    j["EnforceHttps"] = v.EnforceHttps;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferencesEndpoint_t& v) {
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>();
    v.Enabled = j.at("Enabled").get<bool>();
    v.Version = j.at("Version").get<std::string>();
    v.Retries = j.at("Retries").get<int64_t>();
    v.EnforceHttps = j.at("EnforceHttps").get<bool>();
  }
  inline std::string to_string(const PlayerPreferencesEndpoint_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
