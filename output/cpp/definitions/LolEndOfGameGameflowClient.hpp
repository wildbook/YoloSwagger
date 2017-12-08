#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameflowClient_t {
    uint16_t observerServerPort;
    bool running;
    std::string observerServerIp;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowClient_t& v) {
    j["observerServerPort"] = v.observerServerPort;
    j["running"] = v.running;
    j["observerServerIp"] = v.observerServerIp;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowClient_t& v) {
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.running = j.at("running").get<bool>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
  }
  inline std::string to_string(const LolEndOfGameGameflowClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
