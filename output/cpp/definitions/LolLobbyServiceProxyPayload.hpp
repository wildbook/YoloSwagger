#ifndef SWAGGER_TYPES_LolLobbyServiceProxyPayload_HPP
#define SWAGGER_TYPES_LolLobbyServiceProxyPayload_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyServiceProxyPayload {
    // 
    std::string body;
    // 
    std::string url;
    // 
    std::string method;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyServiceProxyPayload& v) {
    j["body"] = v.body;
    j["url"] = v.url;
    j["method"] = v.method;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyServiceProxyPayload& v) {
    v.body = j.at("body").get<std::string>;
    v.url = j.at("url").get<std::string>;
    v.method = j.at("method").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyServiceProxyPayload_HPP
