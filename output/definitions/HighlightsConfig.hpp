#ifndef SWAGGER_TYPES_HighlightsConfig_HPP
#define SWAGGER_TYPES_HighlightsConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct HighlightsConfig {
    // 
    std::string invalidHighlightNameCharacters;
    // 
    bool isHighlightsEnabled;
  };

  void to_json(nlohmann::json& j, const HighlightsConfig& v) {
    j["invalidHighlightNameCharacters"] = v.invalidHighlightNameCharacters;
    j["isHighlightsEnabled"] = v.isHighlightsEnabled;
  }

  void from_json(const nlohmann::json& j, HighlightsConfig& v) {
    v.invalidHighlightNameCharacters = j.at("invalidHighlightNameCharacters").get<std::string>;
    v.isHighlightsEnabled = j.at("isHighlightsEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_HighlightsConfig_HPP
