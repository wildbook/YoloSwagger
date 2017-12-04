#ifndef SWAGGER_TYPES_SanitizerContainsSanitizedRequest_HPP
#define SWAGGER_TYPES_SanitizerContainsSanitizedRequest_HPP
#include <json.hpp>
namespace test {
  // 
  struct SanitizerContainsSanitizedRequest {
'    // 
    bool aggressiveScan;
    // 
    bool includeEmbedded;
    // 
    uint32_t level;
    // 
    bool removeDisallowedChars;
    // 
    std::string text;
  };

  void to_json(nlohmann::json& j, const SanitizerContainsSanitizedRequest& v) {
    j["aggressiveScan"] = v.aggressiveScan;
    j["includeEmbedded"] = v.includeEmbedded;
    j["level"] = v.level;
    j["removeDisallowedChars"] = v.removeDisallowedChars;
    j["text"] = v.text;
  }

  void from_json(const nlohmann::json& j, SanitizerContainsSanitizedRequest& v) {
    v.aggressiveScan = j.at("aggressiveScan").get<bool>;
    v.includeEmbedded = j.at("includeEmbedded").get<bool>;
    v.level = j.at("level").get<uint32_t>;
    v.removeDisallowedChars = j.at("removeDisallowedChars").get<bool>;
    v.text = j.at("text").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SanitizerContainsSanitizedRequest_HPP
