#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct HighlightsConfig_t {
    bool isHighlightsEnabled;
    std::string invalidHighlightNameCharacters;
  };

  inline void to_json(nlohmann::json& j, const HighlightsConfig_t& v) {
    j["isHighlightsEnabled"] = v.isHighlightsEnabled;
    j["invalidHighlightNameCharacters"] = v.invalidHighlightNameCharacters;
  }

  inline void from_json(const nlohmann::json& j, HighlightsConfig_t& v) {
    v.isHighlightsEnabled = j.at("isHighlightsEnabled").get<bool>();
    v.invalidHighlightNameCharacters = j.at("invalidHighlightNameCharacters").get<std::string>();
  }
  inline std::string to_string(const HighlightsConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
