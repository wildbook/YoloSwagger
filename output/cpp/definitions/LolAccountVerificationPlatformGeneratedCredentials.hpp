#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationPlatformGeneratedCredentials_t {
    std::string username;
    nlohmann::json gasToken;
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationPlatformGeneratedCredentials_t& v) {
    j["username"] = v.username;
    j["gasToken"] = v.gasToken;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationPlatformGeneratedCredentials_t& v) {
    v.username = j.at("username").get<std::string>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.password = j.at("password").get<std::string>();
  }
}
