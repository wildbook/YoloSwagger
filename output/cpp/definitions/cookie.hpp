#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct cookie_t {
    bool secure;
    bool httponly;
    std::string domain;
    std::string name;
    std::optional<int64_t> expires;
    std::string url;
    std::string value;
    std::string path;
  };

  inline void to_json(nlohmann::json& j, const cookie_t& v) {
    j["secure"] = v.secure;
    j["httponly"] = v.httponly;
    j["domain"] = v.domain;
    j["name"] = v.name;
    if(v.expires)
      j["expires"] = *v.expires;
    j["url"] = v.url;
    j["value"] = v.value;
    j["path"] = v.path;
  }

  inline void from_json(const nlohmann::json& j, cookie_t& v) {
    v.secure = j.at("secure").get<bool>();
    v.httponly = j.at("httponly").get<bool>();
    v.domain = j.at("domain").get<std::string>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("expires"); it != j.end() && !it->is_null())
      v.expires = it->get<int64_t>();
    v.url = j.at("url").get<std::string>();
    v.value = j.at("value").get<std::string>();
    v.path = j.at("path").get<std::string>();
  }
  inline std::string to_string(const cookie_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
