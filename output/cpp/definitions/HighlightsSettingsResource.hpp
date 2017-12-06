#pragma once
#include <json.hpp>
#include <optional>
#include "HighlightsSettingsData.hpp"
namespace leagueapi {
  struct HighlightsSettingsResource_t {
    HighlightsSettingsData_t data;
  };

  inline void to_json(nlohmann::json& j, const HighlightsSettingsResource_t& v) {
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, HighlightsSettingsResource_t& v) {
    v.data = j.at("data").get<HighlightsSettingsData_t>();
  }
}
