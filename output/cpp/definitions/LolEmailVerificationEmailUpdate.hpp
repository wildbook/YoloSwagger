#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEmailVerificationEmailUpdate_t {
    std::string_t password;
    std::string_t email;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationEmailUpdate_t& v) {
    j["password"] = v.password;
    j["email"] = v.email;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationEmailUpdate_t& v) {
    v.password = j.at("password").get<std::string_t>();
    v.email = j.at("email").get<std::string_t>();
  }
  inline std::string to_string(const LolEmailVerificationEmailUpdate_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
