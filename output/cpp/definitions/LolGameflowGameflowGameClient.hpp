#ifndef SWAGGER_TYPES_LolGameflowGameflowGameClient_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameClient_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameflowGameflowGameClient {
    // 
    uint16_t observerServerPort;
    // 
    std::string observerServerIp;
    // 
    std::string serverIp;
    // 
    bool visible;
    // 
    bool running;
    // 
    uint16_t serverPort;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameClient& v) {
    j["observerServerPort"] = v.observerServerPort;
    j["observerServerIp"] = v.observerServerIp;
    j["serverIp"] = v.serverIp;
    j["visible"] = v.visible;
    j["running"] = v.running;
    j["serverPort"] = v.serverPort;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameClient& v) {
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>;
    v.observerServerIp = j.at("observerServerIp").get<std::string>;
    v.serverIp = j.at("serverIp").get<std::string>;
    v.visible = j.at("visible").get<bool>;
    v.running = j.at("running").get<bool>;
    v.serverPort = j.at("serverPort").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameClient_HPP
