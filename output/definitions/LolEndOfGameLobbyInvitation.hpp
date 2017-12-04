#ifndef SWAGGER_TYPES_LolEndOfGameLobbyInvitation_HPP
#define SWAGGER_TYPES_LolEndOfGameLobbyInvitation_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEndOfGameLobbyInvitation {
'    // 
    std::string state;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameLobbyInvitation& v) {
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameLobbyInvitation& v) {
    v.state = j.at("state").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLobbyInvitation_HPP
