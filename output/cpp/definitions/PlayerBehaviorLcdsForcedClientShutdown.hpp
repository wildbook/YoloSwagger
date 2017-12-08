#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerBehaviorLcdsForcedClientShutdown_t {
    std::string reason;
    std::string additionalInfo;
  };

  inline void to_json(nlohmann::json& j, const PlayerBehaviorLcdsForcedClientShutdown_t& v) {
    j["reason"] = v.reason;
    j["additionalInfo"] = v.additionalInfo;
  }

  inline void from_json(const nlohmann::json& j, PlayerBehaviorLcdsForcedClientShutdown_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.additionalInfo = j.at("additionalInfo").get<std::string>();
  }
  inline std::string to_string(const PlayerBehaviorLcdsForcedClientShutdown_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
