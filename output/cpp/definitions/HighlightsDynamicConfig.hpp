#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct HighlightsDynamicConfig_t {
    bool Enabled;
  };

  inline void to_json(nlohmann::json& j, const HighlightsDynamicConfig_t& v) {
    j["Enabled"] = v.Enabled;
  }

  inline void from_json(const nlohmann::json& j, HighlightsDynamicConfig_t& v) {
    v.Enabled = j.at("Enabled").get<bool>();
  }
  inline std::string to_string(const HighlightsDynamicConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
