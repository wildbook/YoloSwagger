#ifndef SWAGGER_TYPES_LolEndOfGameGameflowClient_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowClient_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEndOfGameGameflowClient {
'    // 
    std::string observerServerIp;
    // 
    uint16_t observerServerPort;
    // 
    bool running;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameGameflowClient& v) {
    j["observerServerIp"] = v.observerServerIp;
    j["observerServerPort"] = v.observerServerPort;
    j["running"] = v.running;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameGameflowClient& v) {
    v.observerServerIp = j.at("observerServerIp").get<std::string>;
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>;
    v.running = j.at("running").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowClient_HPP
