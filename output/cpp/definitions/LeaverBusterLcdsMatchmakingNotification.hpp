#ifndef SWAGGER_TYPES_LeaverBusterLcdsMatchmakingNotification_HPP
#define SWAGGER_TYPES_LeaverBusterLcdsMatchmakingNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LeaverBusterLcdsMatchmakingNotification {
    // 
    std::vector<nlohmann::json> playerJoinFailures;
  };

  inline void to_json(nlohmann::json& j, const LeaverBusterLcdsMatchmakingNotification& v) {
    j["playerJoinFailures"] = v.playerJoinFailures;
  }

  inline void from_json(const nlohmann::json& j, LeaverBusterLcdsMatchmakingNotification& v) {
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_LeaverBusterLcdsMatchmakingNotification_HPP
