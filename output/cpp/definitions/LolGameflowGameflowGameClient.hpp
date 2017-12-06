#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameClient_t {
    std::string serverIp;
    uint16_t observerServerPort;
    bool visible;
    bool running;
    std::string observerServerIp;
    uint16_t serverPort;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameClient_t& v) {
    j["serverIp"] = v.serverIp;
    j["observerServerPort"] = v.observerServerPort;
    j["visible"] = v.visible;
    j["running"] = v.running;
    j["observerServerIp"] = v.observerServerIp;
    j["serverPort"] = v.serverPort;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameClient_t& v) {
    v.serverIp = j.at("serverIp").get<std::string>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.visible = j.at("visible").get<bool>();
    v.running = j.at("running").get<bool>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.serverPort = j.at("serverPort").get<uint16_t>();
  }
}
