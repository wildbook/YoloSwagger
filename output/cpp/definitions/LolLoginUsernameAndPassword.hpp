#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginUsernameAndPassword_t {
    std::string username;
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolLoginUsernameAndPassword_t& v) {
    j["username"] = v.username;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolLoginUsernameAndPassword_t& v) {
    v.username = j.at("username").get<std::string>();
    v.password = j.at("password").get<std::string>();
  }
}
