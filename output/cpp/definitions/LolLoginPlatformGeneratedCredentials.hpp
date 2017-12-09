#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginPlatformGeneratedCredentials_t {
    std::string username;
    nlohmann::json gasToken;
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolLoginPlatformGeneratedCredentials_t& v) {
    j["username"] = v.username;
    j["gasToken"] = v.gasToken;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolLoginPlatformGeneratedCredentials_t& v) {
    v.username = j.at("username").get<std::string>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.password = j.at("password").get<std::string>();
  }
  inline std::string to_string(const LolLoginPlatformGeneratedCredentials_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
