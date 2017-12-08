#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthAccessToken_t {
    uint64_t expiry;
    std::vector<std::string> scopes;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAccessToken_t& v) {
    j["expiry"] = v.expiry;
    j["scopes"] = v.scopes;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAccessToken_t& v) {
    v.expiry = j.at("expiry").get<uint64_t>();
    v.scopes = j.at("scopes").get<std::vector<std::string>>();
    v.token = j.at("token").get<std::string>();
  }
  inline std::string to_string(const RsoAuthAccessToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
