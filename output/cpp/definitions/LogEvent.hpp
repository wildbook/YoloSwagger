#pragma once
#include <json.hpp>
#include <optional>
#include "LogSeverityLevels.hpp"
namespace leagueapi {
  // Describes a log entry.
  struct LogEvent_t {
    LogSeverityLevels_t severity;
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const LogEvent_t& v) {
    j["severity"] = v.severity;
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, LogEvent_t& v) {
    v.severity = j.at("severity").get<LogSeverityLevels_t>();
    v.message = j.at("message").get<std::string>();
  }
}
