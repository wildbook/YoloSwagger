#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginAccessToken_t {
    std::vector<std::string> scopes;
    std::string_t token;
    uint64_t_t expiry;
  };

  inline void to_json(nlohmann::json& j, const LolLoginAccessToken_t& v) {
    j["scopes"] = v.scopes;
    j["token"] = v.token;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, LolLoginAccessToken_t& v) {
    v.scopes = j.at("scopes").get<std::vector<std::string>>();
    v.token = j.at("token").get<std::string_t>();
    v.expiry = j.at("expiry").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLoginAccessToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
