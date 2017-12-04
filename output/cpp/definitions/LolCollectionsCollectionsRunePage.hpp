#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRunePage_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRunePage_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsRune.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsRunePage {
    // 
    bool current;
    // 
    uint32_t id;
    // 
    std::vector<LolCollectionsCollectionsRune> runes;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRunePage& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["runes"] = v.runes;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRunePage& v) {
    v.current = j.at("current").get<bool>;
    v.id = j.at("id").get<uint32_t>;
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune>>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRunePage_HPP
