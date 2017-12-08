#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksCollectionsRunePage.hpp"
namespace leagueapi {
  struct LolPerksCollectionsRuneBook_t {
    std::vector<LolPerksCollectionsRunePage_t> pages;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksCollectionsRuneBook_t& v) {
    j["pages"] = v.pages;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksCollectionsRuneBook_t& v) {
    v.pages = j.at("pages").get<std::vector<LolPerksCollectionsRunePage_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolPerksCollectionsRuneBook_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
