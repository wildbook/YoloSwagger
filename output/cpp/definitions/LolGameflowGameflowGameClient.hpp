#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameClient_t {
    std::string observerServerIp;
    uint16_t serverPort;
    std::string serverIp;
    uint16_t observerServerPort;
    bool visible;
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameClient_t& v) {
    j["observerServerIp"] = v.observerServerIp;
    j["serverPort"] = v.serverPort;
    j["serverIp"] = v.serverIp;
    j["observerServerPort"] = v.observerServerPort;
    j["visible"] = v.visible;
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameClient_t& v) {
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.serverPort = j.at("serverPort").get<uint16_t>();
    v.serverIp = j.at("serverIp").get<std::string>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.visible = j.at("visible").get<bool>();
    v.running = j.at("running").get<bool>();
  }
  inline std::string to_string(const LolGameflowGameflowGameClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
