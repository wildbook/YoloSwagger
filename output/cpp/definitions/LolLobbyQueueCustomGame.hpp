#ifndef SWAGGER_TYPES_LolLobbyQueueCustomGame_HPP
#define SWAGGER_TYPES_LolLobbyQueueCustomGame_HPP
#include <json.hpp>
#include "LolLobbyQueueAvailability.hpp"
namespace leagueapi {
  // 
  struct LolLobbyQueueCustomGame {
    // 
    LolLobbyQueueAvailability queueAvailability;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueCustomGame& v) {
    j["queueAvailability"] = v.queueAvailability;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueCustomGame& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolLobbyQueueAvailability>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyQueueCustomGame_HPP
