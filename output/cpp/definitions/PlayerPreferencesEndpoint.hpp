#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerPreferencesEndpoint_t {
    bool_t EnforceHttps;
    std::string_t Version;
    bool_t Enabled;
    std::string_t ServiceEndpoint;
    int64_t_t Retries;
  };

  inline void to_json(nlohmann::json& j, const PlayerPreferencesEndpoint_t& v) {
    j["EnforceHttps"] = v.EnforceHttps;
    j["Version"] = v.Version;
    j["Enabled"] = v.Enabled;
    j["ServiceEndpoint"] = v.ServiceEndpoint;
    j["Retries"] = v.Retries;
  }

  inline void from_json(const nlohmann::json& j, PlayerPreferencesEndpoint_t& v) {
    v.EnforceHttps = j.at("EnforceHttps").get<bool_t>();
    v.Version = j.at("Version").get<std::string_t>();
    v.Enabled = j.at("Enabled").get<bool_t>();
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string_t>();
    v.Retries = j.at("Retries").get<int64_t_t>();
  }
  inline std::string to_string(const PlayerPreferencesEndpoint_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
