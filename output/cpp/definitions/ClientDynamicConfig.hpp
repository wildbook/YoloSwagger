#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClientDynamicConfig_t {
    std::string_t configs;
    bool_t compressed;
    bool_t delta;
  };

  inline void to_json(nlohmann::json& j, const ClientDynamicConfig_t& v) {
    j["configs"] = v.configs;
    j["compressed"] = v.compressed;
    j["delta"] = v.delta;
  }

  inline void from_json(const nlohmann::json& j, ClientDynamicConfig_t& v) {
    v.configs = j.at("configs").get<std::string_t>();
    v.compressed = j.at("compressed").get<bool_t>();
    v.delta = j.at("delta").get<bool_t>();
  }
  inline std::string to_string(const ClientDynamicConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
