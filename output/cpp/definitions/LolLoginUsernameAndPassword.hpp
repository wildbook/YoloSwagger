#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginUsernameAndPassword_t {
    std::string password;
    std::string username;
  };

  inline void to_json(nlohmann::json& j, const LolLoginUsernameAndPassword_t& v) {
    j["password"] = v.password;
    j["username"] = v.username;
  }

  inline void from_json(const nlohmann::json& j, LolLoginUsernameAndPassword_t& v) {
    v.password = j.at("password").get<std::string>();
    v.username = j.at("username").get<std::string>();
  }
}
