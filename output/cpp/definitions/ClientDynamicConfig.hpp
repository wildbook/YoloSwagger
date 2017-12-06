#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClientDynamicConfig_t {
    bool delta;
    bool compressed;
    std::string configs;
  };

  inline void to_json(nlohmann::json& j, const ClientDynamicConfig_t& v) {
    j["delta"] = v.delta;
    j["compressed"] = v.compressed;
    j["configs"] = v.configs;
  }

  inline void from_json(const nlohmann::json& j, ClientDynamicConfig_t& v) {
    v.delta = j.at("delta").get<bool>();
    v.compressed = j.at("compressed").get<bool>();
    v.configs = j.at("configs").get<std::string>();
  }
}
