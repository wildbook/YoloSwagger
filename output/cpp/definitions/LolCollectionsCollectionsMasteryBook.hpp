#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsMasteryPage.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsMasteryBook_t {
    uint64_t summonerId;
    std::vector<LolCollectionsCollectionsMasteryPage_t> pages;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryBook_t& v) {
    j["summonerId"] = v.summonerId;
    j["pages"] = v.pages;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryBook_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsMasteryPage_t>>();
  }
  inline std::string to_string(const LolCollectionsCollectionsMasteryBook_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
