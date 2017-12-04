#ifndef SWAGGER_TYPES_LolChampionsGameDataChampionSpell_HPP
#define SWAGGER_TYPES_LolChampionsGameDataChampionSpell_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChampionsGameDataChampionSpell {
'    // 
    std::string description;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSpell& v) {
    j["description"] = v.description;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSpell& v) {
    v.description = j.at("description").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsGameDataChampionSpell_HPP
