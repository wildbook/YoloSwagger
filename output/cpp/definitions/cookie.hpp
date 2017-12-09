#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct cookie_t {
    std::optional<int64_t> expires;
    std::string path;
    std::string name;
    std::string value;
    bool httponly;
    std::string url;
    bool secure;
    std::string domain;
  };

  inline void to_json(nlohmann::json& j, const cookie_t& v) {
    if(v.expires)
      j["expires"] = *v.expires;
    j["path"] = v.path;
    j["name"] = v.name;
    j["value"] = v.value;
    j["httponly"] = v.httponly;
    j["url"] = v.url;
    j["secure"] = v.secure;
    j["domain"] = v.domain;
  }

  inline void from_json(const nlohmann::json& j, cookie_t& v) {
    if(auto it = j.find("expires"); it != j.end() && !it->is_null())
      v.expires = it->get<int64_t>();
    v.path = j.at("path").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.value = j.at("value").get<std::string>();
    v.httponly = j.at("httponly").get<bool>();
    v.url = j.at("url").get<std::string>();
    v.secure = j.at("secure").get<bool>();
    v.domain = j.at("domain").get<std::string>();
  }
  inline std::string to_string(const cookie_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
