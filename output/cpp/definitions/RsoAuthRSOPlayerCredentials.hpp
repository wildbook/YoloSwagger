#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthRSOPlayerCredentials_t {
    std::string_t platformId;
    std::string_t username;
    std::string_t password;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthRSOPlayerCredentials_t& v) {
    j["platformId"] = v.platformId;
    j["username"] = v.username;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthRSOPlayerCredentials_t& v) {
    v.platformId = j.at("platformId").get<std::string_t>();
    v.username = j.at("username").get<std::string_t>();
    v.password = j.at("password").get<std::string_t>();
  }
  inline std::string to_string(const RsoAuthRSOPlayerCredentials_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
