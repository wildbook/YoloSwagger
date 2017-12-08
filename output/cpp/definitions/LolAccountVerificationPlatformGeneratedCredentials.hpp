#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationPlatformGeneratedCredentials_t {
    std::string_t username;
    std::string_t password;
    nlohmann::json_t gasToken;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationPlatformGeneratedCredentials_t& v) {
    j["username"] = v.username;
    j["password"] = v.password;
    j["gasToken"] = v.gasToken;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationPlatformGeneratedCredentials_t& v) {
    v.username = j.at("username").get<std::string_t>();
    v.password = j.at("password").get<std::string_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json_t>();
  }
  inline std::string to_string(const LolAccountVerificationPlatformGeneratedCredentials_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
