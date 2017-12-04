#ifndef SWAGGER_TYPES_LolChatSanitizeResponse_HPP
#define SWAGGER_TYPES_LolChatSanitizeResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatSanitizeResponse {
    // 
    bool modified;
    // 
    std::vector<std::string> texts;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizeResponse& v) {
    j["modified"] = v.modified;
    j["texts"] = v.texts;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizeResponse& v) {
    v.modified = j.at("modified").get<bool>;
    v.texts = j.at("texts").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolChatSanitizeResponse_HPP
