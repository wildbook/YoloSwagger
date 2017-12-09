#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginRSOPlayerCredentials_t {
    std::string platformId;
    std::string password;
    std::string username;
  };

  inline void to_json(nlohmann::json& j, const LolLoginRSOPlayerCredentials_t& v) {
    j["platformId"] = v.platformId;
    j["password"] = v.password;
    j["username"] = v.username;
  }

  inline void from_json(const nlohmann::json& j, LolLoginRSOPlayerCredentials_t& v) {
    v.platformId = j.at("platformId").get<std::string>();
    v.password = j.at("password").get<std::string>();
    v.username = j.at("username").get<std::string>();
  }
  inline std::string to_string(const LolLoginRSOPlayerCredentials_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
