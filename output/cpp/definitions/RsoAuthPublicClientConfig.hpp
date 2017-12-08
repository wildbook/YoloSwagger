#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthPublicClientConfig_t {
    std::string_t url;
    std::string_t clientId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthPublicClientConfig_t& v) {
    j["url"] = v.url;
    j["clientId"] = v.clientId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthPublicClientConfig_t& v) {
    v.url = j.at("url").get<std::string_t>();
    v.clientId = j.at("clientId").get<std::string_t>();
  }
  inline std::string to_string(const RsoAuthPublicClientConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
