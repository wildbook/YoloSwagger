#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthPublicClientConfig_t {
    std::string clientId;
    std::string url;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthPublicClientConfig_t& v) {
    j["clientId"] = v.clientId;
    j["url"] = v.url;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthPublicClientConfig_t& v) {
    v.clientId = j.at("clientId").get<std::string>();
    v.url = j.at("url").get<std::string>();
  }
  inline std::string to_string(const RsoAuthPublicClientConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
