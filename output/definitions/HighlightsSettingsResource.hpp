#ifndef SWAGGER_TYPES_HighlightsSettingsResource_HPP
#define SWAGGER_TYPES_HighlightsSettingsResource_HPP
#include <json.hpp>
#include "HighlightsSettingsData.hpp"
namespace test {
  // 
  struct HighlightsSettingsResource {
'    // 
    HighlightsSettingsData data;
  };

  void to_json(nlohmann::json& j, const HighlightsSettingsResource& v) {
    j["data"] = v.data;
  }

  void from_json(const nlohmann::json& j, HighlightsSettingsResource& v) {
    v.data = j.at("data").get<HighlightsSettingsData>;
  }

}
#endif // SWAGGER_TYPES_HighlightsSettingsResource_HPP
