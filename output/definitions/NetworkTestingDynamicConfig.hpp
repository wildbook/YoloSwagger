#ifndef SWAGGER_TYPES_NetworkTestingDynamicConfig_HPP
#define SWAGGER_TYPES_NetworkTestingDynamicConfig_HPP
#include <json.hpp>
namespace test {
  // 
  struct NetworkTestingDynamicConfig {
'    // 
    double IPv4OptionsProbability;
    // 
    uint8_t IPv4OptionsProbeCount;
    // 
    uint16_t IPv4OptionsProbePort;
    // 
    std::string IPv4OptionsProbeServers;
    // 
    double IPv6SupportProbability;
    // 
    uint8_t IPv6SupportProbeCount;
    // 
    uint16_t IPv6SupportProbePort;
    // 
    std::string IPv6SupportProbeServers;
  };

  void to_json(nlohmann::json& j, const NetworkTestingDynamicConfig& v) {
    j["IPv4OptionsProbability"] = v.IPv4OptionsProbability;
    j["IPv4OptionsProbeCount"] = v.IPv4OptionsProbeCount;
    j["IPv4OptionsProbePort"] = v.IPv4OptionsProbePort;
    j["IPv4OptionsProbeServers"] = v.IPv4OptionsProbeServers;
    j["IPv6SupportProbability"] = v.IPv6SupportProbability;
    j["IPv6SupportProbeCount"] = v.IPv6SupportProbeCount;
    j["IPv6SupportProbePort"] = v.IPv6SupportProbePort;
    j["IPv6SupportProbeServers"] = v.IPv6SupportProbeServers;
  }

  void from_json(const nlohmann::json& j, NetworkTestingDynamicConfig& v) {
    v.IPv4OptionsProbability = j.at("IPv4OptionsProbability").get<double>;
    v.IPv4OptionsProbeCount = j.at("IPv4OptionsProbeCount").get<uint8_t>;
    v.IPv4OptionsProbePort = j.at("IPv4OptionsProbePort").get<uint16_t>;
    v.IPv4OptionsProbeServers = j.at("IPv4OptionsProbeServers").get<std::string>;
    v.IPv6SupportProbability = j.at("IPv6SupportProbability").get<double>;
    v.IPv6SupportProbeCount = j.at("IPv6SupportProbeCount").get<uint8_t>;
    v.IPv6SupportProbePort = j.at("IPv6SupportProbePort").get<uint16_t>;
    v.IPv6SupportProbeServers = j.at("IPv6SupportProbeServers").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_NetworkTestingDynamicConfig_HPP
