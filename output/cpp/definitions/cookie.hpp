#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct cookie_t {
    std::string domain;
    std::string name;
    std::string url;
    std::optional<int64_t> expires;
    std::string value;
    std::string path;
    bool httponly;
    bool secure;
  };

  inline void to_json(nlohmann::json& j, const cookie_t& v) {
    j["domain"] = v.domain;
    j["name"] = v.name;
    j["url"] = v.url;
    if(v.expires)
      j["expires"] = *v.expires;
    j["value"] = v.value;
    j["path"] = v.path;
    j["httponly"] = v.httponly;
    j["secure"] = v.secure;
  }

  inline void from_json(const nlohmann::json& j, cookie_t& v) {
    v.domain = j.at("domain").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.url = j.at("url").get<std::string>();
    if(auto it = j.find("expires"); it != j.end() && !it->is_null())
      v.expires = it->get<int64_t>();
    v.value = j.at("value").get<std::string>();
    v.path = j.at("path").get<std::string>();
    v.httponly = j.at("httponly").get<bool>();
    v.secure = j.at("secure").get<bool>();
  }
  inline std::string to_string(const cookie_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
