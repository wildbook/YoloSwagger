#ifndef SWAGGER_TYPES_HighlightsDynamicConfig_HPP
#define SWAGGER_TYPES_HighlightsDynamicConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct HighlightsDynamicConfig {
    // 
    bool Enabled;
  };

  inline void to_json(nlohmann::json& j, const HighlightsDynamicConfig& v) {
    j["Enabled"] = v.Enabled;
  }

  inline void from_json(const nlohmann::json& j, HighlightsDynamicConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_HighlightsDynamicConfig_HPP
