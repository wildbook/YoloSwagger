#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderNetworkConfig_t {
    std::string_t linkUrlTemplate;
    bool_t enabled;
    std::string_t name;
    std::string_t unlinkUrlTemplate;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderNetworkConfig_t& v) {
    j["linkUrlTemplate"] = v.linkUrlTemplate;
    j["enabled"] = v.enabled;
    j["name"] = v.name;
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderNetworkConfig_t& v) {
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string_t>();
    v.enabled = j.at("enabled").get<bool_t>();
    v.name = j.at("name").get<std::string_t>();
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string_t>();
  }
  inline std::string to_string(const RecofrienderNetworkConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
