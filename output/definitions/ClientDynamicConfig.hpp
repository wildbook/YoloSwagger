#ifndef SWAGGER_TYPES_ClientDynamicConfig_HPP
#define SWAGGER_TYPES_ClientDynamicConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClientDynamicConfig {
    // 
    bool compressed;
    // 
    std::string configs;
    // 
    bool delta;
  };

  inline void to_json(nlohmann::json& j, const ClientDynamicConfig& v) {
    j["compressed"] = v.compressed;
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }

  inline void from_json(const nlohmann::json& j, ClientDynamicConfig& v) {
    v.compressed = j.at("compressed").get<bool>;
    v.configs = j.at("configs").get<std::string>;
    v.delta = j.at("delta").get<bool>;
  }

}
#endif // SWAGGER_TYPES_ClientDynamicConfig_HPP
