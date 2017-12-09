#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionSpell.hpp"
#include "LolChampionsGameDataChampionSkin.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampion_t {
    std::string name;
    std::string chooseVoPath;
    std::string banVoPath;
    int32_t id;
    std::string alias;
    LolChampionsGameDataChampionSpell_t passive;
    std::vector<LolChampionsGameDataChampionSpell_t> spells;
    std::vector<LolChampionsGameDataChampionSkin_t> skins;
    std::string squarePortraitPath;
    std::string stingerSfxPath;
    std::vector<std::string> roles;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampion_t& v) {
    j["name"] = v.name;
    j["chooseVoPath"] = v.chooseVoPath;
    j["banVoPath"] = v.banVoPath;
    j["id"] = v.id;
    j["alias"] = v.alias;
    j["passive"] = v.passive;
    j["spells"] = v.spells;
    j["skins"] = v.skins;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["roles"] = v.roles;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampion_t& v) {
    v.name = j.at("name").get<std::string>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.alias = j.at("alias").get<std::string>();
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell_t>();
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell_t>>();
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin_t>>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolChampionsGameDataChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
