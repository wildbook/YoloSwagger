#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRunePage.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRuneBook_t {
    uint64_t summonerId;
    std::vector<LolCollectionsCollectionsRunePage_t> pages;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneBook_t& v) {
    j["summonerId"] = v.summonerId;
    j["pages"] = v.pages;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneBook_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsRunePage_t>>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRuneBook_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
