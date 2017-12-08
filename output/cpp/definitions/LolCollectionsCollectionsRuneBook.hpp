#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRunePage.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRuneBook_t {
    std::vector<LolCollectionsCollectionsRunePage_t> pages;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneBook_t& v) {
    j["pages"] = v.pages;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneBook_t& v) {
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsRunePage_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRuneBook_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
