#ifndef SWAGGER_TYPES_LeaverBusterLcdsMatchmakingNotification_HPP
#define SWAGGER_TYPES_LeaverBusterLcdsMatchmakingNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LeaverBusterLcdsMatchmakingNotification {
    // 
    std::vector<nlohmann::json> playerJoinFailures;
  };

  void to_json(nlohmann::json& j, const LeaverBusterLcdsMatchmakingNotification& v) {
    j["playerJoinFailures"] = v.playerJoinFailures;
  }

  void from_json(const nlohmann::json& j, LeaverBusterLcdsMatchmakingNotification& v) {
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_LeaverBusterLcdsMatchmakingNotification_HPP
