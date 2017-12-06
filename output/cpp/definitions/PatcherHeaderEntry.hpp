#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherHeaderEntry_t {
    std::string key;
    std::string value;
  };

  inline void to_json(nlohmann::json& j, const PatcherHeaderEntry_t& v) {
    j["key"] = v.key;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, PatcherHeaderEntry_t& v) {
    v.key = j.at("key").get<std::string>();
    v.value = j.at("value").get<std::string>();
  }
}
