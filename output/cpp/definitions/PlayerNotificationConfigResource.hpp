#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerNotificationConfigResource_t {
    std::optional<uint64_t> ExpirationCheckFrequency;
  };

  inline void to_json(nlohmann::json& j, const PlayerNotificationConfigResource_t& v) {
    if(v.ExpirationCheckFrequency)
      j["ExpirationCheckFrequency"] = *v.ExpirationCheckFrequency;
  }

  inline void from_json(const nlohmann::json& j, PlayerNotificationConfigResource_t& v) {
    if(auto it = j.find("ExpirationCheckFrequency"); it != j.end() && !it->is_null())
      v.ExpirationCheckFrequency = it->get<uint64_t>();
  }
  inline std::string to_string(const PlayerNotificationConfigResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
