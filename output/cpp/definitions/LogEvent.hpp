#pragma once
#include <json.hpp>
#include <optional>
#include "LogSeverityLevels.hpp"
namespace leagueapi {
  // Describes a log entry.
  struct LogEvent_t {
    std::string_t message;
    LogSeverityLevels_t severity;
  };

  inline void to_json(nlohmann::json& j, const LogEvent_t& v) {
    j["message"] = v.message;
    j["severity"] = v.severity;
  }

  inline void from_json(const nlohmann::json& j, LogEvent_t& v) {
    v.message = j.at("message").get<std::string_t>();
    v.severity = j.at("severity").get<LogSeverityLevels_t>();
  }
  inline std::string to_string(const LogEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
