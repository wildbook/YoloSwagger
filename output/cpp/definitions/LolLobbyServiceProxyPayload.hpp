#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyServiceProxyPayload_t {
    std::string_t body;
    std::string_t url;
    std::string_t method;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyServiceProxyPayload_t& v) {
    j["body"] = v.body;
    j["url"] = v.url;
    j["method"] = v.method;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyServiceProxyPayload_t& v) {
    v.body = j.at("body").get<std::string_t>();
    v.url = j.at("url").get<std::string_t>();
    v.method = j.at("method").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyServiceProxyPayload_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
