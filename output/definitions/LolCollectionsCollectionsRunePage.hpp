#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRunePage_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRunePage_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsRune.hpp"
namespace test {
  // 
  struct LolCollectionsCollectionsRunePage {
'    // 
    bool current;
    // 
    uint32_t id;
    // 
    std::string name;
    // 
    std::vector<LolCollectionsCollectionsRune> runes;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsRunePage& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["name"] = v.name;
    j["runes"] = v.runes;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsRunePage& v) {
    v.current = j.at("current").get<bool>;
    v.id = j.at("id").get<uint32_t>;
    v.name = j.at("name").get<std::string>;
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRunePage_HPP
