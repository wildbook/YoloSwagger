#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct cookie_t {
    std::string domain;
    std::optional<int64_t> expires;
    bool httponly;
    std::string name;
    std::string path;
    bool secure;
    std::string url;
    std::string value;
  };

  inline void to_json(nlohmann::json& j, const cookie_t& v) {
    j["domain"] = v.domain;
    if(v.expires)
      j["expires"] = *v.expires;
    j["httponly"] = v.httponly;
    j["name"] = v.name;
    j["path"] = v.path;
    j["secure"] = v.secure;
    j["url"] = v.url;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, cookie_t& v) {
    v.domain = j.at("domain").get<std::string>();
    if(auto it = j.find("expires"); it != j.end() !it->is_null())
      v.expires = it->get<int64_t>();
    v.httponly = j.at("httponly").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.path = j.at("path").get<std::string>();
    v.secure = j.at("secure").get<bool>();
    v.url = j.at("url").get<std::string>();
    v.value = j.at("value").get<std::string>();
  }
}
