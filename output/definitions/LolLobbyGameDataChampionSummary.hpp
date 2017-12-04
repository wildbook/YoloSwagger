#ifndef SWAGGER_TYPES_LolLobbyGameDataChampionSummary_HPP
#define SWAGGER_TYPES_LolLobbyGameDataChampionSummary_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyGameDataChampionSummary {
'    // 
    std::string alias;
    // 
    int32_t id;
  };

  void to_json(nlohmann::json& j, const LolLobbyGameDataChampionSummary& v) {
    j["alias"] = v.alias;
    j["id"] = v.id;
  }

  void from_json(const nlohmann::json& j, LolLobbyGameDataChampionSummary& v) {
    v.alias = j.at("alias").get<std::string>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameDataChampionSummary_HPP
