#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowGameflowGameClient_t {
    uint16_t_t observerServerPort;
    std::string_t observerServerIp;
    std::string_t serverIp;
    bool_t visible;
    bool_t running;
    uint16_t_t serverPort;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameClient_t& v) {
    j["observerServerPort"] = v.observerServerPort;
    j["observerServerIp"] = v.observerServerIp;
    j["serverIp"] = v.serverIp;
    j["visible"] = v.visible;
    j["running"] = v.running;
    j["serverPort"] = v.serverPort;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameClient_t& v) {
    v.observerServerPort = j.at("observerServerPort").get<uint16_t_t>();
    v.observerServerIp = j.at("observerServerIp").get<std::string_t>();
    v.serverIp = j.at("serverIp").get<std::string_t>();
    v.visible = j.at("visible").get<bool_t>();
    v.running = j.at("running").get<bool_t>();
    v.serverPort = j.at("serverPort").get<uint16_t_t>();
  }
  inline std::string to_string(const LolGameflowGameflowGameClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
