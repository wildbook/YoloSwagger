#ifndef SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
#define SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
#include <json.hpp>
namespace test {
  // 
  struct RsoAuthPublicClientConfig {
'    // 
    std::string clientId;
    // 
    std::string url;
  };

  void to_json(nlohmann::json& j, const RsoAuthPublicClientConfig& v) {
    j["clientId"] = v.clientId;
    j["url"] = v.url;
  }

  void from_json(const nlohmann::json& j, RsoAuthPublicClientConfig& v) {
    v.clientId = j.at("clientId").get<std::string>;
    v.url = j.at("url").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
