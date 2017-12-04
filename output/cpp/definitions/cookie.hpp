#ifndef SWAGGER_TYPES_cookie_HPP
#define SWAGGER_TYPES_cookie_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct cookie {
    // 
    std::string domain;
    // 
    std::string name;
    // 
    std::string url;
    // 
    int64_t expires;
    // 
    std::string value;
    // 
    std::string path;
    // 
    bool httponly;
    // 
    bool secure;
  };

  inline void to_json(nlohmann::json& j, const cookie& v) {
    j["domain"] = v.domain;
    j["name"] = v.name;
    j["url"] = v.url;
    j["expires"] = v.expires;
    j["value"] = v.value;
    j["path"] = v.path;
    j["httponly"] = v.httponly;
    j["secure"] = v.secure;
  }

  inline void from_json(const nlohmann::json& j, cookie& v) {
    v.domain = j.at("domain").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.url = j.at("url").get<std::string>;
    v.expires = j.at("expires").get<int64_t>;
    v.value = j.at("value").get<std::string>;
    v.path = j.at("path").get<std::string>;
    v.httponly = j.at("httponly").get<bool>;
    v.secure = j.at("secure").get<bool>;
  }

}
#endif // SWAGGER_TYPES_cookie_HPP
