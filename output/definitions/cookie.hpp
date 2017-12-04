#ifndef SWAGGER_TYPES_cookie_HPP
#define SWAGGER_TYPES_cookie_HPP
#include <json.hpp>
namespace test {
  // 
  struct cookie {
'    // 
    std::string domain;
    // 
    int64_t expires;
    // 
    bool httponly;
    // 
    std::string name;
    // 
    std::string path;
    // 
    bool secure;
    // 
    std::string url;
    // 
    std::string value;
  };

  void to_json(nlohmann::json& j, const cookie& v) {
    j["domain"] = v.domain;
    j["expires"] = v.expires;
    j["httponly"] = v.httponly;
    j["name"] = v.name;
    j["path"] = v.path;
    j["secure"] = v.secure;
    j["url"] = v.url;
    j["value"] = v.value;
  }

  void from_json(const nlohmann::json& j, cookie& v) {
    v.domain = j.at("domain").get<std::string>;
    v.expires = j.at("expires").get<int64_t>;
    v.httponly = j.at("httponly").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.path = j.at("path").get<std::string>;
    v.secure = j.at("secure").get<bool>;
    v.url = j.at("url").get<std::string>;
    v.value = j.at("value").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_cookie_HPP
