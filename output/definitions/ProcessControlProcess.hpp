#ifndef SWAGGER_TYPES_ProcessControlProcess_HPP
#define SWAGGER_TYPES_ProcessControlProcess_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ProcessControlProcess {
    // 
    float restart-countdown-seconds;
    // 
    std::string status;
  };

  void to_json(nlohmann::json& j, const ProcessControlProcess& v) {
    j["restart-countdown-seconds"] = v.restart-countdown-seconds;
    j["status"] = v.status;
  }

  void from_json(const nlohmann::json& j, ProcessControlProcess& v) {
    v.restart-countdown-seconds = j.at("restart-countdown-seconds").get<float>;
    v.status = j.at("status").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ProcessControlProcess_HPP
