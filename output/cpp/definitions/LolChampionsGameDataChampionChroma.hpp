#ifndef SWAGGER_TYPES_LolChampionsGameDataChampionChroma_HPP
#define SWAGGER_TYPES_LolChampionsGameDataChampionChroma_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampionsGameDataChampionChroma {
    // 
    std::vector<std::string> colors;
    // 
    std::string chromaPath;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionChroma& v) {
    j["colors"] = v.colors;
    j["chromaPath"] = v.chromaPath;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionChroma& v) {
    v.colors = j.at("colors").get<std::vector<std::string>>;
    v.chromaPath = j.at("chromaPath").get<std::string>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsGameDataChampionChroma_HPP
