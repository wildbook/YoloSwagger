#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameQueuesLcdsMatchingThrottleConfig_t {
    int64_t limit;
    std::string cacheName;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsMatchingThrottleConfig_t& v) {
    j["limit"] = v.limit;
    j["cacheName"] = v.cacheName;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsMatchingThrottleConfig_t& v) {
    v.limit = j.at("limit").get<int64_t>();
    v.cacheName = j.at("cacheName").get<std::string>();
  }
}
