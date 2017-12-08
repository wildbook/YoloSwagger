#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsMasteryPage.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsMasteryBook_t {
    std::vector<LolCollectionsCollectionsMasteryPage_t> pages;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryBook_t& v) {
    j["pages"] = v.pages;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryBook_t& v) {
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsMasteryPage_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsMasteryBook_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
