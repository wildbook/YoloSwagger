#ifndef SWAGGER_TYPES_GameQueuesLcdsAllowSpectators_HPP
#define SWAGGER_TYPES_GameQueuesLcdsAllowSpectators_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class GameQueuesLcdsAllowSpectators {
    // 
    ALL = 3,
    // 
    DROPINONLY = 2,
    // 
    LOBBYONLY = 1,
    // 
    NONE = 0,
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsAllowSpectators& v) {
    switch(v) {
      case GameQueuesLcdsAllowSpectators::ALL:
        j = "ALL";
      break;
      case GameQueuesLcdsAllowSpectators::DROPINONLY:
        j = "DROPINONLY";
      break;
      case GameQueuesLcdsAllowSpectators::LOBBYONLY:
        j = "LOBBYONLY";
      break;
      case GameQueuesLcdsAllowSpectators::NONE:
        j = "NONE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsAllowSpectators& v) {
    const auto s& = j.get<std::string>();
    if(s == "ALL"){
      v = GameQueuesLcdsAllowSpectators::ALL;
      return;
    }
    if(s == "DROPINONLY"){
      v = GameQueuesLcdsAllowSpectators::DROPINONLY;
      return;
    }
    if(s == "LOBBYONLY"){
      v = GameQueuesLcdsAllowSpectators::LOBBYONLY;
      return;
    }
    if(s == "NONE"){
      v = GameQueuesLcdsAllowSpectators::NONE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_GameQueuesLcdsAllowSpectators_HPP
