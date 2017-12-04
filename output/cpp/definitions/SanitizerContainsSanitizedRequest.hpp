#ifndef SWAGGER_TYPES_SanitizerContainsSanitizedRequest_HPP
#define SWAGGER_TYPES_SanitizerContainsSanitizedRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SanitizerContainsSanitizedRequest {
    // 
    std::string text;
    // 
    uint32_t level;
    // 
    bool aggressiveScan;
    // 
    bool removeDisallowedChars;
    // 
    bool includeEmbedded;
  };

  inline void to_json(nlohmann::json& j, const SanitizerContainsSanitizedRequest& v) {
    j["text"] = v.text;
    j["level"] = v.level;
    j["aggressiveScan"] = v.aggressiveScan;
    j["removeDisallowedChars"] = v.removeDisallowedChars;
    j["includeEmbedded"] = v.includeEmbedded;
  }

  inline void from_json(const nlohmann::json& j, SanitizerContainsSanitizedRequest& v) {
    v.text = j.at("text").get<std::string>;
    v.level = j.at("level").get<uint32_t>;
    v.aggressiveScan = j.at("aggressiveScan").get<bool>;
    v.removeDisallowedChars = j.at("removeDisallowedChars").get<bool>;
    v.includeEmbedded = j.at("includeEmbedded").get<bool>;
  }

}
#endif // SWAGGER_TYPES_SanitizerContainsSanitizedRequest_HPP
