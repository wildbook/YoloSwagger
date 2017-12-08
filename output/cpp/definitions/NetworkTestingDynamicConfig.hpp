#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct NetworkTestingDynamicConfig_t {
    uint16_t_t IPv4OptionsProbePort;
    uint8_t_t IPv4OptionsProbeCount;
    std::string_t IPv4OptionsProbeServers;
    uint8_t_t IPv6SupportProbeCount;
    uint16_t_t IPv6SupportProbePort;
    std::string_t IPv6SupportProbeServers;
    double_t IPv4OptionsProbability;
    double_t IPv6SupportProbability;
  };

  inline void to_json(nlohmann::json& j, const NetworkTestingDynamicConfig_t& v) {
    j["IPv4OptionsProbePort"] = v.IPv4OptionsProbePort;
    j["IPv4OptionsProbeCount"] = v.IPv4OptionsProbeCount;
    j["IPv4OptionsProbeServers"] = v.IPv4OptionsProbeServers;
    j["IPv6SupportProbeCount"] = v.IPv6SupportProbeCount;
    j["IPv6SupportProbePort"] = v.IPv6SupportProbePort;
    j["IPv6SupportProbeServers"] = v.IPv6SupportProbeServers;
    j["IPv4OptionsProbability"] = v.IPv4OptionsProbability;
    j["IPv6SupportProbability"] = v.IPv6SupportProbability;
  }

  inline void from_json(const nlohmann::json& j, NetworkTestingDynamicConfig_t& v) {
    v.IPv4OptionsProbePort = j.at("IPv4OptionsProbePort").get<uint16_t_t>();
    v.IPv4OptionsProbeCount = j.at("IPv4OptionsProbeCount").get<uint8_t_t>();
    v.IPv4OptionsProbeServers = j.at("IPv4OptionsProbeServers").get<std::string_t>();
    v.IPv6SupportProbeCount = j.at("IPv6SupportProbeCount").get<uint8_t_t>();
    v.IPv6SupportProbePort = j.at("IPv6SupportProbePort").get<uint16_t_t>();
    v.IPv6SupportProbeServers = j.at("IPv6SupportProbeServers").get<std::string_t>();
    v.IPv4OptionsProbability = j.at("IPv4OptionsProbability").get<double_t>();
    v.IPv6SupportProbability = j.at("IPv6SupportProbability").get<double_t>();
  }
  inline std::string to_string(const NetworkTestingDynamicConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
