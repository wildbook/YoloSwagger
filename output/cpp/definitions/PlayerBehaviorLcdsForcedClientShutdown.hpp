#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerBehaviorLcdsForcedClientShutdown_t {
    std::string additionalInfo;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const PlayerBehaviorLcdsForcedClientShutdown_t& v) {
    j["additionalInfo"] = v.additionalInfo;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, PlayerBehaviorLcdsForcedClientShutdown_t& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string>();
    v.reason = j.at("reason").get<std::string>();
  }
  inline std::string to_string(const PlayerBehaviorLcdsForcedClientShutdown_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
