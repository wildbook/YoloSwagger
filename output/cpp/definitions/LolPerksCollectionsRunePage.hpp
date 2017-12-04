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
    std::vector<LolPerksCollectionsRune> runes;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolPerksCollectionsRunePage& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["runes"] = v.runes;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPerksCollectionsRunePage& v) {
    v.current = j.at("current").get<bool>;
    v.id = j.at("id").get<uint32_t>;
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune>>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksCollectionsRunePage_HPP
