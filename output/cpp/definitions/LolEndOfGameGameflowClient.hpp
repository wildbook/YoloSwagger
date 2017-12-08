#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameflowClient_t {
    uint16_t observerServerPort;
    std::string observerServerIp;
    bool running;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowClient_t& v) {
    j["observerServerPort"] = v.observerServerPort;
    j["observerServerIp"] = v.observerServerIp;
    j["running"] = v.running;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowClient_t& v) {
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.running = j.at("running").get<bool>();
  }
  inline std::string to_string(const LolEndOfGameGameflowClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
