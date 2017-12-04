#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRuneBook_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRuneBook_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsRunePage.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsRuneBook {
    // 
    std::vector<LolCollectionsCollectionsRunePage> pages;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneBook& v) {
    j["pages"] = v.pages;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneBook& v) {
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsRunePage>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRuneBook_HPP
