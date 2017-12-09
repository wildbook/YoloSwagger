#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameClient_t {
    std::string serverIp;
    uint16_t serverPort;
    std::string observerServerIp;
    bool running;
    bool visible;
    uint16_t observerServerPort;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameClient_t& v) {
    j["serverIp"] = v.serverIp;
    j["serverPort"] = v.serverPort;
    j["observerServerIp"] = v.observerServerIp;
    j["running"] = v.running;
    j["visible"] = v.visible;
    j["observerServerPort"] = v.observerServerPort;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameClient_t& v) {
    v.serverIp = j.at("serverIp").get<std::string>();
    v.serverPort = j.at("serverPort").get<uint16_t>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.running = j.at("running").get<bool>();
    v.visible = j.at("visible").get<bool>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
  }
  inline std::string to_string(const LolGameflowGameflowGameClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
