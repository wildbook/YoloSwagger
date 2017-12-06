#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct cookie_t {
    std::string path;
    std::string name;
    bool httponly;
    std::string domain;
    bool secure;
    std::string url;
    std::optional<int64_t> expires;
    std::string value;
  };

  inline void to_json(nlohmann::json& j, const cookie_t& v) {
    j["path"] = v.path;
    j["name"] = v.name;
    j["httponly"] = v.httponly;
    j["domain"] = v.domain;
    j["secure"] = v.secure;
    j["url"] = v.url;
    if(v.expires)
      j["expires"] = *v.expires;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, cookie_t& v) {
    v.path = j.at("path").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.httponly = j.at("httponly").get<bool>();
    v.domain = j.at("domain").get<std::string>();
    v.secure = j.at("secure").get<bool>();
    v.url = j.at("url").get<std::string>();
    if(auto it = j.find("expires"); it != j.end() !it->is_null())
      v.expires = it->get<int64_t>();
    v.value = j.at("value").get<std::string>();
  }
}
