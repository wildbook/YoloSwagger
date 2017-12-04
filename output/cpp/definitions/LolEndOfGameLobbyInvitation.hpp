#ifndef SWAGGER_TYPES_LolEndOfGameLobbyInvitation_HPP
#define SWAGGER_TYPES_LolEndOfGameLobbyInvitation_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEndOfGameLobbyInvitation {
    // 
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLobbyInvitation& v) {
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLobbyInvitation& v) {
    v.state = j.at("state").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLobbyInvitation_HPP
