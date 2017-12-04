#ifndef SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
#define SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthPublicClientConfig {
    // 
    std::string clientId;
    // 
    std::string url;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthPublicClientConfig& v) {
    j["clientId"] = v.clientId;
    j["url"] = v.url;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthPublicClientConfig& v) {
    v.clientId = j.at("clientId").get<std::string>;
    v.url = j.at("url").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthPublicClientConfig_HPP
