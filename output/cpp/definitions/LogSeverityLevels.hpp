#pragma once
#include <json.hpp>
namespace leagueapi {
  // Allowable severity levels for log events.
  enum class LogSeverityLevels_t {
    // Always logged, regardless of program's state
    Always_E = 3,
    // Progress expected to continue, despite issues
    Warning_E = 1,
    // Progress nominal (used for INFO and TRACE)
    Okay_E = 0,
    // Critical failure; thread may terminate
    Error_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LogSeverityLevels_t& v) {
    switch(v) {
      case LogSeverityLevels_t::Always_E:
        j = "Always";
      break;
      case LogSeverityLevels_t::Warning_E:
        j = "Warning";
      break;
      case LogSeverityLevels_t::Okay_E:
        j = "Okay";
      break;
      case LogSeverityLevels_t::Error_E:
        j = "Error";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LogSeverityLevels_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Always"){
      v = LogSeverityLevels_t::Always_E;
      return;
    }
    if(s == "Warning"){
      v = LogSeverityLevels_t::Warning_E;
      return;
    }
    if(s == "Okay"){
      v = LogSeverityLevels_t::Okay_E;
      return;
    }
    if(s == "Error"){
      v = LogSeverityLevels_t::Error_E;
      return;
    }
  }
  inline std::string to_string(const LogSeverityLevels_t& v) {
    switch(v) {
      case LogSeverityLevels_t::Always_E:
        return "Always";
      case LogSeverityLevels_t::Warning_E:
        return "Warning";
      case LogSeverityLevels_t::Okay_E:
        return "Okay";
      case LogSeverityLevels_t::Error_E:
        return "Error";
    }
  }

}
