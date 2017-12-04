#ifndef SWAGGER_TYPES_PlayerNotificationConfigResource_HPP
#define SWAGGER_TYPES_PlayerNotificationConfigResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerNotificationConfigResource {
    // 
    uint64_t ExpirationCheckFrequency;
  };

  inline void to_json(nlohmann::json& j, const PlayerNotificationConfigResource& v) {
    j["ExpirationCheckFrequency"] = v.ExpirationCheckFrequency;
  }

  inline void from_json(const nlohmann::json& j, PlayerNotificationConfigResource& v) {
    v.ExpirationCheckFrequency = j.at("ExpirationCheckFrequency").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerNotificationConfigResource_HPP
