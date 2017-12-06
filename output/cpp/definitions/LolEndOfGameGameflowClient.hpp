#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameflowClient_t {
    bool running;
    std::string observerServerIp;
    uint16_t observerServerPort;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowClient_t& v) {
    j["running"] = v.running;
    j["observerServerIp"] = v.observerServerIp;
    j["observerServerPort"] = v.observerServerPort;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowClient_t& v) {
    v.running = j.at("running").get<bool>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
  }
}
