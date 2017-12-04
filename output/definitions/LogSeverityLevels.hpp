#ifndef SWAGGER_TYPES_LogSeverityLevels_HPP
#define SWAGGER_TYPES_LogSeverityLevels_HPP
#include <json.hpp>
namespace test {
  // Allowable severity levels for log events.
  enum class LogSeverityLevels {
'    // Always logged, regardless of program's state
    Always = 3,
    // Critical failure; thread may terminate
    Error = 2,
    // Progress nominal (used for INFO and TRACE)
    Okay = 0,
    // Progress expected to continue, despite issues
    Warning = 1,
  };

  void to_json(nlohmann::json& j, const LogSeverityLevels& v) {
    switch(v) {
      case LogSeverityLevels::Always:
        j = "Always";
      break;
      case LogSeverityLevels::Error:
        j = "Error";
      break;
      case LogSeverityLevels::Okay:
        j = "Okay";
      break;
      case LogSeverityLevels::Warning:
        j = "Warning";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LogSeverityLevels& v) {
    const auto s& = j.get<std::string>();
    if(s == "Always"){
      v = LogSeverityLevels::Always;
      return;
    }
    if(s == "Error"){
      v = LogSeverityLevels::Error;
      return;
    }
    if(s == "Okay"){
      v = LogSeverityLevels::Okay;
      return;
    }
    if(s == "Warning"){
      v = LogSeverityLevels::Warning;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LogSeverityLevels_HPP
