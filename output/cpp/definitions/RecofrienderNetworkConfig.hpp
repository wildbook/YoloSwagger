#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderNetworkConfig_t {
    std::string unlinkUrlTemplate;
    bool enabled;
    std::string name;
    std::string linkUrlTemplate;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderNetworkConfig_t& v) {
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate;
    j["enabled"] = v.enabled;
    j["name"] = v.name;
    j["linkUrlTemplate"] = v.linkUrlTemplate;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderNetworkConfig_t& v) {
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>();
    v.enabled = j.at("enabled").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>();
  }
}
