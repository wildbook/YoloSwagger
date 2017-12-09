#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionSpell.hpp"
#include "LolChampionsGameDataChampionSkin.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampion_t {
    LolChampionsGameDataChampionSpell_t passive;
    std::string stingerSfxPath;
    std::vector<LolChampionsGameDataChampionSkin_t> skins;
    std::vector<LolChampionsGameDataChampionSpell_t> spells;
    std::string squarePortraitPath;
    std::string name;
    std::string alias;
    std::vector<std::string> roles;
    int32_t id;
    std::string banVoPath;
    std::string chooseVoPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampion_t& v) {
    j["passive"] = v.passive;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["skins"] = v.skins;
    j["spells"] = v.spells;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["name"] = v.name;
    j["alias"] = v.alias;
    j["roles"] = v.roles;
    j["id"] = v.id;
    j["banVoPath"] = v.banVoPath;
    j["chooseVoPath"] = v.chooseVoPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampion_t& v) {
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell_t>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin_t>>();
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell_t>>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.alias = j.at("alias").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.id = j.at("id").get<int32_t>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
  }
  inline std::string to_string(const LolChampionsGameDataChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
