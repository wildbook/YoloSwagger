#ifndef SWAGGER_TYPES_LolLobbyServiceProxyPayload_HPP
#define SWAGGER_TYPES_LolLobbyServiceProxyPayload_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyServiceProxyPayload {
'    // 
    std::string body;
    // 
    std::string method;
    // 
    std::string url;
  };

  void to_json(nlohmann::json& j, const LolLobbyServiceProxyPayload& v) {
    j["body"] = v.body;
    j["method"] = v.method;
    j["url"] = v.url;
  }

  void from_json(const nlohmann::json& j, LolLobbyServiceProxyPayload& v) {
    v.body = j.at("body").get<std::string>;
    v.method = j.at("method").get<std::string>;
    v.url = j.at("url").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyServiceProxyPayload_HPP
