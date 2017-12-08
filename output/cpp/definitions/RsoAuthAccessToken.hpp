#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthAccessToken_t {
    std::vector<std::string> scopes;
    std::string token;
    uint64_t expiry;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAccessToken_t& v) {
    j["scopes"] = v.scopes;
    j["token"] = v.token;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAccessToken_t& v) {
    v.scopes = j.at("scopes").get<std::vector<std::string>>();
    v.token = j.at("token").get<std::string>();
    v.expiry = j.at("expiry").get<uint64_t>();
  }
  inline std::string to_string(const RsoAuthAccessToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
