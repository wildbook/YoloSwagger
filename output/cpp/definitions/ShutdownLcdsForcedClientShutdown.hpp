#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ShutdownLcdsForcedClientShutdown_t {
    std::string reason;
    std::string additionalInfo;
  };

  inline void to_json(nlohmann::json& j, const ShutdownLcdsForcedClientShutdown_t& v) {
    j["reason"] = v.reason;
    j["additionalInfo"] = v.additionalInfo;
  }

  inline void from_json(const nlohmann::json& j, ShutdownLcdsForcedClientShutdown_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.additionalInfo = j.at("additionalInfo").get<std::string>();
  }
  inline std::string to_string(const ShutdownLcdsForcedClientShutdown_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
