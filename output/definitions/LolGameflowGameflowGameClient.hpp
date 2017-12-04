#ifndef SWAGGER_TYPES_LolGameflowGameflowGameClient_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameClient_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolGameflowGameflowGameClient {
'    // 
    std::string observerServerIp;
    // 
    uint16_t observerServerPort;
    // 
    bool running;
    // 
    std::string serverIp;
    // 
    uint16_t serverPort;
    // 
    bool visible;
  };

  void to_json(nlohmann::json& j, const LolGameflowGameflowGameClient& v) {
    j["observerServerIp"] = v.observerServerIp;
    j["observerServerPort"] = v.observerServerPort;
    j["running"] = v.running;
    j["serverIp"] = v.serverIp;
    j["serverPort"] = v.serverPort;
    j["visible"] = v.visible;
  }

  void from_json(const nlohmann::json& j, LolGameflowGameflowGameClient& v) {
    v.observerServerIp = j.at("observerServerIp").get<std::string>;
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>;
    v.running = j.at("running").get<bool>;
    v.serverIp = j.at("serverIp").get<std::string>;
    v.serverPort = j.at("serverPort").get<uint16_t>;
    v.visible = j.at("visible").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameClient_HPP
