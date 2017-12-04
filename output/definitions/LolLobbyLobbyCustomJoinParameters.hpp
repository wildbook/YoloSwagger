#ifndef SWAGGER_TYPES_LolLobbyLobbyCustomJoinParameters_HPP
#define SWAGGER_TYPES_LolLobbyLobbyCustomJoinParameters_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyLobbyCustomJoinParameters {
'    // 
    bool asSpectator;
    // 
    std::string password;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyCustomJoinParameters& v) {
    j["asSpectator"] = v.asSpectator;
    j["password"] = v.password;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyCustomJoinParameters& v) {
    v.asSpectator = j.at("asSpectator").get<bool>;
    v.password = j.at("password").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyCustomJoinParameters_HPP
