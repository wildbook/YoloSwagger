#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct HighlightsSettingsData_t {
    std::string highlights-folder-path;
  };

  inline void to_json(nlohmann::json& j, const HighlightsSettingsData_t& v) {
    j["highlights-folder-path"] = v.highlights-folder-path;
  }

  inline void from_json(const nlohmann::json& j, HighlightsSettingsData_t& v) {
    v.highlights-folder-path = j.at("highlights-folder-path").get<std::string>();
  }
}
