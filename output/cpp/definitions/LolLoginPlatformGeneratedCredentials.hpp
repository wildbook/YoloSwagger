#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginPlatformGeneratedCredentials_t {
    std::string username;
    std::string password;
    nlohmann::json gasToken;
  };

  inline void to_json(nlohmann::json& j, const LolLoginPlatformGeneratedCredentials_t& v) {
    j["username"] = v.username;
    j["password"] = v.password;
    j["gasToken"] = v.gasToken;
  }

  inline void from_json(const nlohmann::json& j, LolLoginPlatformGeneratedCredentials_t& v) {
    v.username = j.at("username").get<std::string>();
    v.password = j.at("password").get<std::string>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
  }
  inline std::string to_string(const LolLoginPlatformGeneratedCredentials_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
