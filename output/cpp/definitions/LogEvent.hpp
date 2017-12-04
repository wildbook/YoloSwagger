#ifndef SWAGGER_TYPES_LogEvent_HPP
#define SWAGGER_TYPES_LogEvent_HPP
#include <json.hpp>
#include "LogSeverityLevels.hpp"
namespace leagueapi {
  // Describes a log entry.
  struct LogEvent {
    // 
    std::string message;
    // 
    LogSeverityLevels severity;
  };

  inline void to_json(nlohmann::json& j, const LogEvent& v) {
    j["message"] = v.message;
    j["severity"] = v.severity;
  }

  inline void from_json(const nlohmann::json& j, LogEvent& v) {
    v.message = j.at("message").get<std::string>;
    v.severity = j.at("severity").get<LogSeverityLevels>;
  }

}
#endif // SWAGGER_TYPES_LogEvent_HPP
