#ifndef SWAGGER_TYPES_LolChatSanitizeRequest_HPP
#define SWAGGER_TYPES_LolChatSanitizeRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatSanitizeRequest {
    // 
    bool aggressiveScan;
    // 
    uint32_t level;
    // 
    bool removeDisallowedChars;
    // 
    std::vector<std::string> texts;
  };

  inline void to_json(nlohmann::json& j, const LolChatSanitizeRequest& v) {
    j["aggressiveScan"] = v.aggressiveScan;
    j["level"] = v.level;
    j["removeDisallowedChars"] = v.removeDisallowedChars;
    j["texts"] = v.texts;
  }

  inline void from_json(const nlohmann::json& j, LolChatSanitizeRequest& v) {
    v.aggressiveScan = j.at("aggressiveScan").get<bool>;
    v.level = j.at("level").get<uint32_t>;
    v.removeDisallowedChars = j.at("removeDisallowedChars").get<bool>;
    v.texts = j.at("texts").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolChatSanitizeRequest_HPP
