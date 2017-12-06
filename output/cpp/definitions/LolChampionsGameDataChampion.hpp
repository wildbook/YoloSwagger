#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionSkin.hpp"
#include "LolChampionsGameDataChampionSpell.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampion_t {
    std::string alias;
    std::string banVoPath;
    std::string chooseVoPath;
    int32_t id;
    std::string name;
    LolChampionsGameDataChampionSpell_t passive;
    std::vector<std::string> roles;
    std::vector<LolChampionsGameDataChampionSkin_t> skins;
    std::vector<LolChampionsGameDataChampionSpell_t> spells;
    std::string squarePortraitPath;
    std::string stingerSfxPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampion_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampion_t& v) {
    v.alias = j.at("alias").get<std::string>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell_t>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin_t>>();
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell_t>>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
  }
}
