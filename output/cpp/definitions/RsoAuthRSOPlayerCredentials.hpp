#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthRSOPlayerCredentials_t {
    std::string username;
    std::string password;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthRSOPlayerCredentials_t& v) {
    j["username"] = v.username;
    j["password"] = v.password;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthRSOPlayerCredentials_t& v) {
    v.username = j.at("username").get<std::string>();
    v.password = j.at("password").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
  }
}
