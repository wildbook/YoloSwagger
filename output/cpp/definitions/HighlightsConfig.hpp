#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct HighlightsConfig_t {
    std::string_t invalidHighlightNameCharacters;
    bool_t isHighlightsEnabled;
  };

  inline void to_json(nlohmann::json& j, const HighlightsConfig_t& v) {
    j["invalidHighlightNameCharacters"] = v.invalidHighlightNameCharacters;
    j["isHighlightsEnabled"] = v.isHighlightsEnabled;
  }

  inline void from_json(const nlohmann::json& j, HighlightsConfig_t& v) {
    v.invalidHighlightNameCharacters = j.at("invalidHighlightNameCharacters").get<std::string_t>();
    v.isHighlightsEnabled = j.at("isHighlightsEnabled").get<bool_t>();
  }
  inline std::string to_string(const HighlightsConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
