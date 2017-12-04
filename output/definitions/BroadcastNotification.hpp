#ifndef SWAGGER_TYPES_BroadcastNotification_HPP
#define SWAGGER_TYPES_BroadcastNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct BroadcastNotification {
    // 
    std::vector<nlohmann::json> broadcastMessages;
  };

  void to_json(nlohmann::json& j, const BroadcastNotification& v) {
    j["broadcastMessages"] = v.broadcastMessages;
  }

  void from_json(const nlohmann::json& j, BroadcastNotification& v) {
    v.broadcastMessages = j.at("broadcastMessages").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_BroadcastNotification_HPP
