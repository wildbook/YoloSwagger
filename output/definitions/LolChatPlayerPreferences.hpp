#ifndef SWAGGER_TYPES_LolChatPlayerPreferences_HPP
#define SWAGGER_TYPES_LolChatPlayerPreferences_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatPlayerPreferences {
    // 
    std::string data;
    // 
    std::string hash;
    // 
    uint64_t modified;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolChatPlayerPreferences& v) {
    j["data"] = v.data;
    j["hash"] = v.hash;
    j["modified"] = v.modified;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolChatPlayerPreferences& v) {
    v.data = j.at("data").get<std::string>;
    v.hash = j.at("hash").get<std::string>;
    v.modified = j.at("modified").get<uint64_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatPlayerPreferences_HPP
