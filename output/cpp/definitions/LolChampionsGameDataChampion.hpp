#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionSpell.hpp"
#include "LolChampionsGameDataChampionSkin.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampion_t {
    std::string stingerSfxPath;
    std::string name;
    std::vector<std::string> roles;
    std::string banVoPath;
    std::vector<LolChampionsGameDataChampionSkin_t> skins;
    LolChampionsGameDataChampionSpell_t passive;
    std::string alias;
    std::string chooseVoPath;
    std::string squarePortraitPath;
    int32_t id;
    std::vector<LolChampionsGameDataChampionSpell_t> spells;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampion_t& v) {
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["name"] = v.name;
    j["roles"] = v.roles;
    j["banVoPath"] = v.banVoPath;
    j["skins"] = v.skins;
    j["passive"] = v.passive;
    j["alias"] = v.alias;
    j["chooseVoPath"] = v.chooseVoPath;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["id"] = v.id;
    j["spells"] = v.spells;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampion_t& v) {
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin_t>>();
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell_t>();
    v.alias = j.at("alias").get<std::string>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell_t>>();
  }
  inline std::string to_string(const LolChampionsGameDataChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
