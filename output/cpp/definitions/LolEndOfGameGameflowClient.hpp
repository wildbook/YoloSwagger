#ifndef SWAGGER_TYPES_LolEndOfGameGameflowClient_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowClient_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEndOfGameGameflowClient {
    // 
    uint16_t observerServerPort;
    // 
    bool running;
    // 
    std::string observerServerIp;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowClient& v) {
    j["observerServerPort"] = v.observerServerPort;
    j["running"] = v.running;
    j["observerServerIp"] = v.observerServerIp;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowClient& v) {
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>;
    v.running = j.at("running").get<bool>;
    v.observerServerIp = j.at("observerServerIp").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowClient_HPP
