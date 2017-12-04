#ifndef SWAGGER_TYPES_LolPerksCollectionsRuneBook_HPP
#define SWAGGER_TYPES_LolPerksCollectionsRuneBook_HPP
#include <json.hpp>
#include "LolPerksCollectionsRunePage.hpp"
namespace test {
  // 
  struct LolPerksCollectionsRuneBook {
'    // 
    std::vector<LolPerksCollectionsRunePage> pages;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolPerksCollectionsRuneBook& v) {
    j["pages"] = v.pages;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolPerksCollectionsRuneBook& v) {
    v.pages = j.at("pages").get<std::vector<LolPerksCollectionsRunePage>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksCollectionsRuneBook_HPP
