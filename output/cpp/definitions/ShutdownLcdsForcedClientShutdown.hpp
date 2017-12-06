#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ShutdownLcdsForcedClientShutdown_t {
    std::string additionalInfo;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const ShutdownLcdsForcedClientShutdown_t& v) {
    j["additionalInfo"] = v.additionalInfo;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, ShutdownLcdsForcedClientShutdown_t& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string>();
    v.reason = j.at("reason").get<std::string>();
  }
}
