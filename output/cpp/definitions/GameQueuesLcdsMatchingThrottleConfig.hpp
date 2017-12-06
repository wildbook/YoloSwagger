#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameQueuesLcdsMatchingThrottleConfig_t {
    std::string cacheName;
    int64_t limit;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsMatchingThrottleConfig_t& v) {
    j["cacheName"] = v.cacheName;
    j["limit"] = v.limit;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsMatchingThrottleConfig_t& v) {
    v.cacheName = j.at("cacheName").get<std::string>();
    v.limit = j.at("limit").get<int64_t>();
  }
}
