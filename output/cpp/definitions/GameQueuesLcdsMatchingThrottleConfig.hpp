#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameQueuesLcdsMatchingThrottleConfig_t {
    std::string_t cacheName;
    int64_t_t limit;
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsMatchingThrottleConfig_t& v) {
    j["cacheName"] = v.cacheName;
    j["limit"] = v.limit;
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsMatchingThrottleConfig_t& v) {
    v.cacheName = j.at("cacheName").get<std::string_t>();
    v.limit = j.at("limit").get<int64_t_t>();
  }
  inline std::string to_string(const GameQueuesLcdsMatchingThrottleConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
