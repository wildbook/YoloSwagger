#ifndef SWAGGER_TYPES_SanitizerSanitizeResponse_HPP
#define SWAGGER_TYPES_SanitizerSanitizeResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SanitizerSanitizeResponse {
    // 
    bool modified;
    // 
    std::string text;
    // 
    std::vector<std::string> texts;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizeResponse& v) {
    j["modified"] = v.modified;
    j["text"] = v.text;
    j["texts"] = v.texts;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizeResponse& v) {
    v.modified = j.at("modified").get<bool>;
    v.text = j.at("text").get<std::string>;
    v.texts = j.at("texts").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_SanitizerSanitizeResponse_HPP
