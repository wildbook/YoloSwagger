#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSetItem.hpp"
namespace leagueapi {
  struct LolItemSetsItemSetBlock_t {
    std::vector<LolItemSetsItemSetItem_t> items;
    std::string_t hideIfSummonerSpell;
    std::string_t type;
    std::string_t showIfSummonerSpell;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSetBlock_t& v) {
    j["items"] = v.items;
    j["hideIfSummonerSpell"] = v.hideIfSummonerSpell;
    j["type"] = v.type;
    j["showIfSummonerSpell"] = v.showIfSummonerSpell;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSetBlock_t& v) {
    v.items = j.at("items").get<std::vector<LolItemSetsItemSetItem_t>>();
    v.hideIfSummonerSpell = j.at("hideIfSummonerSpell").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.showIfSummonerSpell = j.at("showIfSummonerSpell").get<std::string_t>();
  }
  inline std::string to_string(const LolItemSetsItemSetBlock_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
