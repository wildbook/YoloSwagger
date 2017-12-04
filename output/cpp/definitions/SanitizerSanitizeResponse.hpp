#ifndef SWAGGER_TYPES_SanitizerSanitizeResponse_HPP
#define SWAGGER_TYPES_SanitizerSanitizeResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SanitizerSanitizeResponse {
    // 
    std::string text;
    // 
    bool modified;
    // 
    std::vector<std::string> texts;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizeResponse& v) {
    j["text"] = v.text;
    j["modified"] = v.modified;
    j["texts"] = v.texts;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizeResponse& v) {
    v.text = j.at("text").get<std::string>;
    v.modified = j.at("modified").get<bool>;
    v.texts = j.at("texts").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_SanitizerSanitizeResponse_HPP
