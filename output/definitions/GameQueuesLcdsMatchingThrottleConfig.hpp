#ifndef SWAGGER_TYPES_GameQueuesLcdsMatchingThrottleConfig_HPP
#define SWAGGER_TYPES_GameQueuesLcdsMatchingThrottleConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct GameQueuesLcdsMatchingThrottleConfig {
    // 
    std::string cacheName;
    // 
    int64_t limit;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsMatchingThrottleConfig& v) {
    j["cacheName"] = v.cacheName;
    j["limit"] = v.limit;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsMatchingThrottleConfig& v) {
    v.cacheName = j.at("cacheName").get<std::string>;
    v.limit = j.at("limit").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_GameQueuesLcdsMatchingThrottleConfig_HPP
