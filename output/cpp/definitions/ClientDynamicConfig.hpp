#ifndef SWAGGER_TYPES_ClientDynamicConfig_HPP
#define SWAGGER_TYPES_ClientDynamicConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClientDynamicConfig {
    // 
    std::string configs;
    // 
    bool compressed;
    // 
    bool delta;
  };

  inline void to_json(nlohmann::json& j, const ClientDynamicConfig& v) {
    j["configs"] = v.configs;
    j["compressed"] = v.compressed;
    j["delta"] = v.delta;
  }

  inline void from_json(const nlohmann::json& j, ClientDynamicConfig& v) {
    v.configs = j.at("configs").get<std::string>;
    v.compressed = j.at("compressed").get<bool>;
    v.delta = j.at("delta").get<bool>;
  }

}
#endif // SWAGGER_TYPES_ClientDynamicConfig_HPP
