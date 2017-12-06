#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatAuthResourcePlain_t {
    nlohmann::json gasToken;
    std::string password;
    std::string username;
  };

  inline void to_json(nlohmann::json& j, const LolChatAuthResourcePlain_t& v) {
    j["gasToken"] = v.gasToken;
    j["password"] = v.password;
    j["username"] = v.username;
  }

  inline void from_json(const nlohmann::json& j, LolChatAuthResourcePlain_t& v) {
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.password = j.at("password").get<std::string>();
    v.username = j.at("username").get<std::string>();
  }
}
