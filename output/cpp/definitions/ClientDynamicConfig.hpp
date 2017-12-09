#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClientDynamicConfig_t {
    bool compressed;
    std::string configs;
    bool delta;
  };

  inline void to_json(nlohmann::json& j, const ClientDynamicConfig_t& v) {
    j["compressed"] = v.compressed;
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }

  inline void from_json(const nlohmann::json& j, ClientDynamicConfig_t& v) {
    v.compressed = j.at("compressed").get<bool>();
    v.configs = j.at("configs").get<std::string>();
    v.delta = j.at("delta").get<bool>();
  }
  inline std::string to_string(const ClientDynamicConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
