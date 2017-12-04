#ifndef SWAGGER_TYPES_LolItemSetsItemSetBlock_HPP
#define SWAGGER_TYPES_LolItemSetsItemSetBlock_HPP
#include <json.hpp>
#include "LolItemSetsItemSetItem.hpp"
namespace leagueapi {
  // 
  struct LolItemSetsItemSetBlock {
    // 
    std::vector<LolItemSetsItemSetItem> items;
    // 
    std::string hideIfSummonerSpell;
    // 
    std::string type;
    // 
    std::string showIfSummonerSpell;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSetBlock& v) {
    j["items"] = v.items;
    j["hideIfSummonerSpell"] = v.hideIfSummonerSpell;
    j["type"] = v.type;
    j["showIfSummonerSpell"] = v.showIfSummonerSpell;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSetBlock& v) {
    v.items = j.at("items").get<std::vector<LolItemSetsItemSetItem>>;
    v.hideIfSummonerSpell = j.at("hideIfSummonerSpell").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.showIfSummonerSpell = j.at("showIfSummonerSpell").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolItemSetsItemSetBlock_HPP
