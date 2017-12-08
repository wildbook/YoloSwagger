#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksCollectionsRunePage.hpp"
namespace leagueapi {
  struct LolPerksCollectionsRuneBook_t {
    uint64_t summonerId;
    std::vector<LolPerksCollectionsRunePage_t> pages;
  };

  inline void to_json(nlohmann::json& j, const LolPerksCollectionsRuneBook_t& v) {
    j["summonerId"] = v.summonerId;
    j["pages"] = v.pages;
  }

  inline void from_json(const nlohmann::json& j, LolPerksCollectionsRuneBook_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.pages = j.at("pages").get<std::vector<LolPerksCollectionsRunePage_t>>();
  }
  inline std::string to_string(const LolPerksCollectionsRuneBook_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
