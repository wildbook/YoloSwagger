#ifndef SWAGGER_TYPES_HighlightsDynamicConfig_HPP
#define SWAGGER_TYPES_HighlightsDynamicConfig_HPP
#include <json.hpp>
namespace test {
  // 
  struct HighlightsDynamicConfig {
'    // 
    bool Enabled;
  };

  void to_json(nlohmann::json& j, const HighlightsDynamicConfig& v) {
    j["Enabled"] = v.Enabled;
  }

  void from_json(const nlohmann::json& j, HighlightsDynamicConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_HighlightsDynamicConfig_HPP
