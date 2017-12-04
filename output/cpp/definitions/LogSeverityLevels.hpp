#ifndef SWAGGER_TYPES_LogSeverityLevels_HPP
#define SWAGGER_TYPES_LogSeverityLevels_HPP
#include <json.hpp>
namespace leagueapi {
  // Allowable severity levels for log events.
  enum class LogSeverityLevels {
    // Always logged, regardless of program's state
    Always = 3,
    // Progress expected to continue, despite issues
    Warning = 1,
    // Progress nominal (used for INFO and TRACE)
    Okay = 0,
    // Critical failure; thread may terminate
    Error = 2,
  };

  inline void to_json(nlohmann::json& j, const LogSeverityLevels& v) {
    switch(v) {
      case LogSeverityLevels::Always:
        j = "Always";
      break;
      case LogSeverityLevels::Warning:
        j = "Warning";
      break;
      case LogSeverityLevels::Okay:
        j = "Okay";
      break;
      case LogSeverityLevels::Error:
        j = "Error";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LogSeverityLevels& v) {
    const auto& s = j.get<std::string>();
    if(s == "Always"){
      v = LogSeverityLevels::Always;
      return;
    }
    if(s == "Warning"){
      v = LogSeverityLevels::Warning;
      return;
    }
    if(s == "Okay"){
      v = LogSeverityLevels::Okay;
      return;
    }
    if(s == "Error"){
      v = LogSeverityLevels::Error;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LogSeverityLevels_HPP
