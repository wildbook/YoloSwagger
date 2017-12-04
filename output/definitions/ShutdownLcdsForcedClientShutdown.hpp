#ifndef SWAGGER_TYPES_ShutdownLcdsForcedClientShutdown_HPP
#define SWAGGER_TYPES_ShutdownLcdsForcedClientShutdown_HPP
#include <json.hpp>
namespace test {
  // 
  struct ShutdownLcdsForcedClientShutdown {
'    // 
    std::string additionalInfo;
    // 
    std::string reason;
  };

  void to_json(nlohmann::json& j, const ShutdownLcdsForcedClientShutdown& v) {
    j["additionalInfo"] = v.additionalInfo;
    j["reason"] = v.reason;
  }

  void from_json(const nlohmann::json& j, ShutdownLcdsForcedClientShutdown& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string>;
    v.reason = j.at("reason").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ShutdownLcdsForcedClientShutdown_HPP
