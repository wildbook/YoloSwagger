#ifndef SWAGGER_TYPES_SanitizerSanitizeRequest_HPP
#define SWAGGER_TYPES_SanitizerSanitizeRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SanitizerSanitizeRequest {
    // 
    bool aggressiveScan;
    // 
    uint32_t level;
    // 
    bool removeDisallowedChars;
    // 
    std::string text;
    // 
    std::vector<std::string> texts;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizeRequest& v) {
    j["aggressiveScan"] = v.aggressiveScan;
    j["level"] = v.level;
    j["removeDisallowedChars"] = v.removeDisallowedChars;
    j["text"] = v.text;
    j["texts"] = v.texts;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizeRequest& v) {
    v.aggressiveScan = j.at("aggressiveScan").get<bool>;
    v.level = j.at("level").get<uint32_t>;
    v.removeDisallowedChars = j.at("removeDisallowedChars").get<bool>;
    v.text = j.at("text").get<std::string>;
    v.texts = j.at("texts").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_SanitizerSanitizeRequest_HPP
