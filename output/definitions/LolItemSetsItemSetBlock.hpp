#ifndef SWAGGER_TYPES_LolItemSetsItemSetBlock_HPP
#define SWAGGER_TYPES_LolItemSetsItemSetBlock_HPP
#include <json.hpp>
#include "LolItemSetsItemSetItem.hpp"
namespace leagueapi {
  // 
  struct LolItemSetsItemSetBlock {
    // 
    std::string hideIfSummonerSpell;
    // 
    std::vector<LolItemSetsItemSetItem> items;
    // 
    std::string showIfSummonerSpell;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSetBlock& v) {
    j["hideIfSummonerSpell"] = v.hideIfSummonerSpell;
    j["items"] = v.items;
    j["showIfSummonerSpell"] = v.showIfSummonerSpell;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSetBlock& v) {
    v.hideIfSummonerSpell = j.at("hideIfSummonerSpell").get<std::string>;
    v.items = j.at("items").get<std::vector<LolItemSetsItemSetItem>>;
    v.showIfSummonerSpell = j.at("showIfSummonerSpell").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsItemSetBlock_HPP
