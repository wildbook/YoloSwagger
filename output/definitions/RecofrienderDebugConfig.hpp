#ifndef SWAGGER_TYPES_RecofrienderDebugConfig_HPP
#define SWAGGER_TYPES_RecofrienderDebugConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderDebugConfig {
    // 
    bool isHttpLoggingEnabled;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderDebugConfig& v) {
    j["isHttpLoggingEnabled"] = v.isHttpLoggingEnabled;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderDebugConfig& v) {
    v.isHttpLoggingEnabled = j.at("isHttpLoggingEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderDebugConfig_HPP
