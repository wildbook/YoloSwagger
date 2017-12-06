#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionSpell.hpp"
#include "LolChampionsGameDataChampionSkin.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampion_t {
    std::string squarePortraitPath;
    int32_t id;
    std::vector<LolChampionsGameDataChampionSkin_t> skins;
    std::string alias;
    LolChampionsGameDataChampionSpell_t passive;
    std::string name;
    std::vector<LolChampionsGameDataChampionSpell_t> spells;
    std::string stingerSfxPath;
    std::string chooseVoPath;
    std::vector<std::string> roles;
    std::string banVoPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampion_t& v) {
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["id"] = v.id;
    j["skins"] = v.skins;
    j["alias"] = v.alias;
    j["passive"] = v.passive;
    j["name"] = v.name;
    j["spells"] = v.spells;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["chooseVoPath"] = v.chooseVoPath;
    j["roles"] = v.roles;
    j["banVoPath"] = v.banVoPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampion_t& v) {
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin_t>>();
    v.alias = j.at("alias").get<std::string>();
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell_t>();
    v.name = j.at("name").get<std::string>();
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell_t>>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
  }
}
