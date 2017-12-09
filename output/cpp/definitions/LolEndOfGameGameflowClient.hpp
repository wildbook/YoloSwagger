#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameflowClient_t {
    bool running;
    uint16_t observerServerPort;
    std::string observerServerIp;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowClient_t& v) {
    j["running"] = v.running;
    j["observerServerPort"] = v.observerServerPort;
    j["observerServerIp"] = v.observerServerIp;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowClient_t& v) {
    v.running = j.at("running").get<bool>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
  }
  inline std::string to_string(const LolEndOfGameGameflowClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
