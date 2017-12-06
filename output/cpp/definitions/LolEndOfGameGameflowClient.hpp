#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameflowClient_t {
    std::string observerServerIp;
    uint16_t observerServerPort;
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowClient_t& v) {
    j["observerServerIp"] = v.observerServerIp;
    j["observerServerPort"] = v.observerServerPort;
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowClient_t& v) {
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.running = j.at("running").get<bool>();
  }
}
