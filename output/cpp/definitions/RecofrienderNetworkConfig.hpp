#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderNetworkConfig_t {
    bool enabled;
    std::string linkUrlTemplate;
    std::string name;
    std::string unlinkUrlTemplate;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderNetworkConfig_t& v) {
    j["enabled"] = v.enabled;
    j["linkUrlTemplate"] = v.linkUrlTemplate;
    j["name"] = v.name;
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderNetworkConfig_t& v) {
    v.enabled = j.at("enabled").get<bool>();
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>();
  }
}
