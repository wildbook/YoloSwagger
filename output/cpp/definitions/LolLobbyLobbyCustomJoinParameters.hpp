#ifndef SWAGGER_TYPES_LolLobbyLobbyCustomJoinParameters_HPP
#define SWAGGER_TYPES_LolLobbyLobbyCustomJoinParameters_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyLobbyCustomJoinParameters {
    // 
    std::string password;
    // 
    bool asSpectator;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomJoinParameters& v) {
    j["password"] = v.password;
    j["asSpectator"] = v.asSpectator;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomJoinParameters& v) {
    v.password = j.at("password").get<std::string>;
    v.asSpectator = j.at("asSpectator").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyCustomJoinParameters_HPP
