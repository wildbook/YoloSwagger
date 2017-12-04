#ifndef SWAGGER_TYPES_LolCollectionsCollectionsMasteryBook_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsMasteryBook_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsMasteryPage.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsMasteryBook {
    // 
    std::vector<LolCollectionsCollectionsMasteryPage> pages;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryBook& v) {
    j["pages"] = v.pages;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryBook& v) {
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsMasteryPage>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsMasteryBook_HPP
