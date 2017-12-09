#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyServiceProxyPayload_t {
    std::string url;
    std::string body;
    std::string method;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyServiceProxyPayload_t& v) {
    j["url"] = v.url;
    j["body"] = v.body;
    j["method"] = v.method;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyServiceProxyPayload_t& v) {
    v.url = j.at("url").get<std::string>();
    v.body = j.at("body").get<std::string>();
    v.method = j.at("method").get<std::string>();
  }
  inline std::string to_string(const LolLobbyServiceProxyPayload_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
