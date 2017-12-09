#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct NetworkTestingDynamicConfig_t {
    std::string IPv4OptionsProbeServers;
    std::string IPv6SupportProbeServers;
    double IPv6SupportProbability;
    double IPv4OptionsProbability;
    uint16_t IPv4OptionsProbePort;
    uint16_t IPv6SupportProbePort;
    uint8_t IPv4OptionsProbeCount;
    uint8_t IPv6SupportProbeCount;
  };

  inline void to_json(nlohmann::json& j, const NetworkTestingDynamicConfig_t& v) {
    j["IPv4OptionsProbeServers"] = v.IPv4OptionsProbeServers;
    j["IPv6SupportProbeServers"] = v.IPv6SupportProbeServers;
    j["IPv6SupportProbability"] = v.IPv6SupportProbability;
    j["IPv4OptionsProbability"] = v.IPv4OptionsProbability;
    j["IPv4OptionsProbePort"] = v.IPv4OptionsProbePort;
    j["IPv6SupportProbePort"] = v.IPv6SupportProbePort;
    j["IPv4OptionsProbeCount"] = v.IPv4OptionsProbeCount;
    j["IPv6SupportProbeCount"] = v.IPv6SupportProbeCount;
  }

  inline void from_json(const nlohmann::json& j, NetworkTestingDynamicConfig_t& v) {
    v.IPv4OptionsProbeServers = j.at("IPv4OptionsProbeServers").get<std::string>();
    v.IPv6SupportProbeServers = j.at("IPv6SupportProbeServers").get<std::string>();
    v.IPv6SupportProbability = j.at("IPv6SupportProbability").get<double>();
    v.IPv4OptionsProbability = j.at("IPv4OptionsProbability").get<double>();
    v.IPv4OptionsProbePort = j.at("IPv4OptionsProbePort").get<uint16_t>();
    v.IPv6SupportProbePort = j.at("IPv6SupportProbePort").get<uint16_t>();
    v.IPv4OptionsProbeCount = j.at("IPv4OptionsProbeCount").get<uint8_t>();
    v.IPv6SupportProbeCount = j.at("IPv6SupportProbeCount").get<uint8_t>();
  }
  inline std::string to_string(const NetworkTestingDynamicConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
