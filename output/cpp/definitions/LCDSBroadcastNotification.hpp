#ifndef SWAGGER_TYPES_LCDSBroadcastNotification_HPP
#define SWAGGER_TYPES_LCDSBroadcastNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LCDSBroadcastNotification {
    // 
    std::vector<nlohmann::json> broadcastMessages;
  };

  inline void to_json(nlohmann::json& j, const LCDSBroadcastNotification& v) {
    j["broadcastMessages"] = v.broadcastMessages;
  }

  inline void from_json(const nlohmann::json& j, LCDSBroadcastNotification& v) {
    v.broadcastMessages = j.at("broadcastMessages").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_LCDSBroadcastNotification_HPP