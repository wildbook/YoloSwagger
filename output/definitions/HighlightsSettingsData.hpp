#ifndef SWAGGER_TYPES_HighlightsSettingsData_HPP
#define SWAGGER_TYPES_HighlightsSettingsData_HPP
#include <json.hpp>
namespace test {
  // 
  struct HighlightsSettingsData {
'    // 
    std::string highlights-folder-path;
  };

  void to_json(nlohmann::json& j, const HighlightsSettingsData& v) {
    j["highlights-folder-path"] = v.highlights-folder-path;
  }

  void from_json(const nlohmann::json& j, HighlightsSettingsData& v) {
    v.highlights-folder-path = j.at("highlights-folder-path").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_HighlightsSettingsData_HPP
