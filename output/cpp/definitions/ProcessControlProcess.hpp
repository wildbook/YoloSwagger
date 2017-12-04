#ifndef SWAGGER_TYPES_ProcessControlProcess_HPP
#define SWAGGER_TYPES_ProcessControlProcess_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ProcessControlProcess {
    // 
    std::string status;
    // 
    float restart-countdown-seconds;
  };

  inline void to_json(nlohmann::json& j, const ProcessControlProcess& v) {
    j["status"] = v.status;
    j["restart-countdown-seconds"] = v.restart-countdown-seconds;
  }

  inline void from_json(const nlohmann::json& j, ProcessControlProcess& v) {
    v.status = j.at("status").get<std::string>;
    v.restart-countdown-seconds = j.at("restart-countdown-seconds").get<float>;
  }

}
#endif // SWAGGER_TYPES_ProcessControlProcess_HPP
