#ifndef SWAGGER_TYPES_LolChampionsGameDataChampion_HPP
#define SWAGGER_TYPES_LolChampionsGameDataChampion_HPP
#include <json.hpp>
#include "LolChampionsGameDataChampionSkin.hpp"
#include "LolChampionsGameDataChampionSpell.hpp"
namespace test {
  // 
  struct LolChampionsGameDataChampion {
'    // 
    std::string alias;
    // 
    std::string banVoPath;
    // 
    std::string chooseVoPath;
    // 
    int32_t id;
    // 
    std::string name;
    // 
    LolChampionsGameDataChampionSpell passive;
    // 
    std::vector<std::string> roles;
    // 
    std::vector<LolChampionsGameDataChampionSkin> skins;
    // 
    std::vector<LolChampionsGameDataChampionSpell> spells;
    // 
    std::string squarePortraitPath;
    // 
    std::string stingerSfxPath;
  };

  void to_json(nlohmann::json& j, const LolChampionsGameDataChampion& v) {
    j["alias"] = v.alias;
    j["banVoPath"] = v.banVoPath;
    j["chooseVoPath"] = v.chooseVoPath;
    j["id"] = v.id;
    j["name"] = v.name;
    j["passive"] = v.passive;
    j["roles"] = v.roles;
    j["skins"] = v.skins;
    j["spells"] = v.spells;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["stingerSfxPath"] = v.stingerSfxPath;
  }

  void from_json(const nlohmann::json& j, LolChampionsGameDataChampion& v) {
    v.alias = j.at("alias").get<std::string>;
    v.banVoPath = j.at("banVoPath").get<std::string>;
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell>;
    v.roles = j.at("roles").get<std::vector<std::string>>;
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin>>;
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell>>;
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>;
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsGameDataChampion_HPP
