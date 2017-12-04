#ifndef SWAGGER_TYPES_LolChatSanitizeResponse_HPP
#define SWAGGER_TYPES_LolChatSanitizeResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatSanitizeResponse {
    // 
    std::vector<std::string> texts;
    // 
    bool modified;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizeResponse& v) {
    j["texts"] = v.texts;
    j["modified"] = v.modified;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizeResponse& v) {
    v.texts = j.at("texts").get<std::vector<std::string>>;
    v.modified = j.at("modified").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChatSanitizeResponse_HPP
