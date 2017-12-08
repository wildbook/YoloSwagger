#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct cookie_t {
    std::optional<int64_t> expires;
    std::string domain;
    std::string name;
    std::string path;
    std::string value;
    bool secure;
    std::string url;
    bool httponly;
  };

  inline void to_json(nlohmann::json& j, const cookie_t& v) {
    if(v.expires)
      j["expires"] = *v.expires;
    j["domain"] = v.domain;
    j["name"] = v.name;
    j["path"] = v.path;
    j["value"] = v.value;
    j["secure"] = v.secure;
    j["url"] = v.url;
    j["httponly"] = v.httponly;
  }

  inline void from_json(const nlohmann::json& j, cookie_t& v) {
    if(auto it = j.find("expires"); it != j.end() && !it->is_null())
      v.expires = it->get<int64_t>();
    v.domain = j.at("domain").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.path = j.at("path").get<std::string>();
    v.value = j.at("value").get<std::string>();
    v.secure = j.at("secure").get<bool>();
    v.url = j.at("url").get<std::string>();
    v.httponly = j.at("httponly").get<bool>();
  }
  inline std::string to_string(const cookie_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
