#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct NetworkTestingDynamicConfig_t {
    double IPv6SupportProbability;
    uint8_t IPv4OptionsProbeCount;
    uint8_t IPv6SupportProbeCount;
    uint16_t IPv6SupportProbePort;
    uint16_t IPv4OptionsProbePort;
    double IPv4OptionsProbability;
    std::string IPv4OptionsProbeServers;
    std::string IPv6SupportProbeServers;
  };

  inline void to_json(nlohmann::json& j, const NetworkTestingDynamicConfig_t& v) {
    j["IPv6SupportProbability"] = v.IPv6SupportProbability;
    j["IPv4OptionsProbeCount"] = v.IPv4OptionsProbeCount;
    j["IPv6SupportProbeCount"] = v.IPv6SupportProbeCount;
    j["IPv6SupportProbePort"] = v.IPv6SupportProbePort;
    j["IPv4OptionsProbePort"] = v.IPv4OptionsProbePort;
    j["IPv4OptionsProbability"] = v.IPv4OptionsProbability;
    j["IPv4OptionsProbeServers"] = v.IPv4OptionsProbeServers;
    j["IPv6SupportProbeServers"] = v.IPv6SupportProbeServers;
  }

  inline void from_json(const nlohmann::json& j, NetworkTestingDynamicConfig_t& v) {
    v.IPv6SupportProbability = j.at("IPv6SupportProbability").get<double>();
    v.IPv4OptionsProbeCount = j.at("IPv4OptionsProbeCount").get<uint8_t>();
    v.IPv6SupportProbeCount = j.at("IPv6SupportProbeCount").get<uint8_t>();
    v.IPv6SupportProbePort = j.at("IPv6SupportProbePort").get<uint16_t>();
    v.IPv4OptionsProbePort = j.at("IPv4OptionsProbePort").get<uint16_t>();
    v.IPv4OptionsProbability = j.at("IPv4OptionsProbability").get<double>();
    v.IPv4OptionsProbeServers = j.at("IPv4OptionsProbeServers").get<std::string>();
    v.IPv6SupportProbeServers = j.at("IPv6SupportProbeServers").get<std::string>();
  }
  inline std::string to_string(const NetworkTestingDynamicConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
