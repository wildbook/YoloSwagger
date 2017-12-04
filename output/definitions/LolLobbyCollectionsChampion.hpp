#ifndef SWAGGER_TYPES_LolLobbyCollectionsChampion_HPP
#define SWAGGER_TYPES_LolLobbyCollectionsChampion_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyCollectionsChampion {
'    // 
    bool active;
    // 
    bool botEnabled;
    // 
    int32_t id;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolLobbyCollectionsChampion& v) {
    j["active"] = v.active;
    j["botEnabled"] = v.botEnabled;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolLobbyCollectionsChampion& v) {
    v.active = j.at("active").get<bool>;
    v.botEnabled = j.at("botEnabled").get<bool>;
    v.id = j.at("id").get<int32_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyCollectionsChampion_HPP
