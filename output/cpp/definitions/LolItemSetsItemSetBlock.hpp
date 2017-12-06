#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSetItem.hpp"
namespace leagueapi {
  struct LolItemSetsItemSetBlock_t {
    std::string hideIfSummonerSpell;
    std::vector<LolItemSetsItemSetItem_t> items;
    std::string showIfSummonerSpell;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSetBlock_t& v) {
    j["hideIfSummonerSpell"] = v.hideIfSummonerSpell;
    j["items"] = v.items;
    j["showIfSummonerSpell"] = v.showIfSummonerSpell;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSetBlock_t& v) {
    v.hideIfSummonerSpell = j.at("hideIfSummonerSpell").get<std::string>();
    v.items = j.at("items").get<std::vector<LolItemSetsItemSetItem_t>>();
    v.showIfSummonerSpell = j.at("showIfSummonerSpell").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
}
