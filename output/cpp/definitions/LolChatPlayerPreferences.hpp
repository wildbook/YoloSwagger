#ifndef SWAGGER_TYPES_LolChatPlayerPreferences_HPP
#define SWAGGER_TYPES_LolChatPlayerPreferences_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatPlayerPreferences {
    // 
    std::string hash;
    // 
    std::string data;
    // 
    uint64_t modified;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolChatPlayerPreferences& v) {
    j["hash"] = v.hash;
    j["data"] = v.data;
    j["modified"] = v.modified;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChatPlayerPreferences& v) {
    v.hash = j.at("hash").get<std::string>;
    v.data = j.at("data").get<std::string>;
    v.modified = j.at("modified").get<uint64_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatPlayerPreferences_HPP