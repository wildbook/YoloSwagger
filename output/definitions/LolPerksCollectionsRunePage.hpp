#ifndef SWAGGER_TYPES_LolPerksCollectionsRunePage_HPP
#define SWAGGER_TYPES_LolPerksCollectionsRunePage_HPP
#include <json.hpp>
#include "LolPerksCollectionsRune.hpp"
namespace leagueapi {
  // 
  struct LolPerksCollectionsRunePage {
    // 
    bool current;
    // 
    uint32_t id;
    // 
    std::string name;
    // 
    std::vector<LolPerksCollectionsRune> runes;
  };

  void to_json(nlohmann::json& j, const LolPerksCollectionsRunePage& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["name"] = v.name;
    j["runes"] = v.runes;
  }

  void from_json(const nlohmann::json& j, LolPerksCollectionsRunePage& v) {
    v.current = j.at("current").get<bool>;
    v.id = j.at("id").get<uint32_t>;
    v.name = j.at("name").get<std::string>;
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune>>;
  }

}
#endif // SWAGGER_TYPES_LolPerksCollectionsRunePage_HPP
