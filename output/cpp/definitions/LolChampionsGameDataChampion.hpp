#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionSkin.hpp"
#include "LolChampionsGameDataChampionSpell.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampion_t {
    int32_t id;
    std::string squarePortraitPath;
    LolChampionsGameDataChampionSpell_t passive;
    std::string stingerSfxPath;
    std::vector<LolChampionsGameDataChampionSkin_t> skins;
    std::vector<std::string> roles;
    std::string name;
    std::string chooseVoPath;
    std::string banVoPath;
    std::string alias;
    std::vector<LolChampionsGameDataChampionSpell_t> spells;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampion_t& v) {
    j["id"] = v.id;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["passive"] = v.passive;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["skins"] = v.skins;
    j["roles"] = v.roles;
    j["name"] = v.name;
    j["chooseVoPath"] = v.chooseVoPath;
    j["banVoPath"] = v.banVoPath;
    j["alias"] = v.alias;
    j["spells"] = v.spells;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampion_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell_t>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin_t>>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.name = j.at("name").get<std::string>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.alias = j.at("alias").get<std::string>();
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell_t>>();
  }
  inline std::string to_string(const LolChampionsGameDataChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
