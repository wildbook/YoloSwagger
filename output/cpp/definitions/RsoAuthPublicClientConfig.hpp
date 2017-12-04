#ifndef SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
#define SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthPublicClientConfig {
    // 
    std::string url;
    // 
    std::string clientId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthPublicClientConfig& v) {
    j["url"] = v.url;
    j["clientId"] = v.clientId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthPublicClientConfig& v) {
    v.url = j.at("url").get<std::string>;
    v.clientId = j.at("clientId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
