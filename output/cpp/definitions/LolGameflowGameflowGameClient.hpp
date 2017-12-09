#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameClient_t {
    bool running;
    std::string serverIp;
    bool visible;
    uint16_t serverPort;
    uint16_t observerServerPort;
    std::string observerServerIp;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameClient_t& v) {
    j["running"] = v.running;
    j["serverIp"] = v.serverIp;
    j["visible"] = v.visible;
    j["serverPort"] = v.serverPort;
    j["observerServerPort"] = v.observerServerPort;
    j["observerServerIp"] = v.observerServerIp;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameClient_t& v) {
    v.running = j.at("running").get<bool>();
    v.serverIp = j.at("serverIp").get<std::string>();
    v.visible = j.at("visible").get<bool>();
    v.serverPort = j.at("serverPort").get<uint16_t>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
  }
  inline std::string to_string(const LolGameflowGameflowGameClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
