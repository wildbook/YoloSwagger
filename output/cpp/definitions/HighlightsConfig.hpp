#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct HighlightsConfig_t {
    std::string invalidHighlightNameCharacters;
    bool isHighlightsEnabled;
  };

  inline void to_json(nlohmann::json& j, const HighlightsConfig_t& v) {
    j["invalidHighlightNameCharacters"] = v.invalidHighlightNameCharacters;
    j["isHighlightsEnabled"] = v.isHighlightsEnabled;
  }

  inline void from_json(const nlohmann::json& j, HighlightsConfig_t& v) {
    v.invalidHighlightNameCharacters = j.at("invalidHighlightNameCharacters").get<std::string>();
    v.isHighlightsEnabled = j.at("isHighlightsEnabled").get<bool>();
  }
}
