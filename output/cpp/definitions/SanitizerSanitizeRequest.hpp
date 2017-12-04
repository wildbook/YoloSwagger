#ifndef SWAGGER_TYPES_SanitizerSanitizeRequest_HPP
#define SWAGGER_TYPES_SanitizerSanitizeRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SanitizerSanitizeRequest {
    // 
    std::string text;
    // 
    std::vector<std::string> texts;
    // 
    bool aggressiveScan;
    // 
    bool removeDisallowedChars;
    // 
    uint32_t level;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizeRequest& v) {
    j["text"] = v.text;
    j["texts"] = v.texts;
    j["aggressiveScan"] = v.aggressiveScan;
    j["removeDisallowedChars"] = v.removeDisallowedChars;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizeRequest& v) {
    v.text = j.at("text").get<std::string>;
    v.texts = j.at("texts").get<std::vector<std::string>>;
    v.aggressiveScan = j.at("aggressiveScan").get<bool>;
    v.removeDisallowedChars = j.at("removeDisallowedChars").get<bool>;
    v.level = j.at("level").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_SanitizerSanitizeRequest_HPP
