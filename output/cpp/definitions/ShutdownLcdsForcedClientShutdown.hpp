#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ShutdownLcdsForcedClientShutdown_t {
    std::string_t additionalInfo;
    std::string_t reason;
  };

  inline void to_json(nlohmann::json& j, const ShutdownLcdsForcedClientShutdown_t& v) {
    j["additionalInfo"] = v.additionalInfo;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, ShutdownLcdsForcedClientShutdown_t& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string_t>();
    v.reason = j.at("reason").get<std::string_t>();
  }
  inline std::string to_string(const ShutdownLcdsForcedClientShutdown_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
