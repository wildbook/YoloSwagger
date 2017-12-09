#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionSkin.hpp"
#include "LolChampionsGameDataChampionSpell.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampion_t {
    std::vector<LolChampionsGameDataChampionSpell_t> spells;
    std::string stingerSfxPath;
    LolChampionsGameDataChampionSpell_t passive;
    std::string name;
    std::vector<std::string> roles;
    std::string banVoPath;
    int32_t id;
    std::string chooseVoPath;
    std::vector<LolChampionsGameDataChampionSkin_t> skins;
    std::string squarePortraitPath;
    std::string alias;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampion_t& v) {
    j["spells"] = v.spells;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["passive"] = v.passive;
    j["name"] = v.name;
    j["roles"] = v.roles;
    j["banVoPath"] = v.banVoPath;
    j["id"] = v.id;
    j["chooseVoPath"] = v.chooseVoPath;
    j["skins"] = v.skins;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["alias"] = v.alias;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampion_t& v) {
    v.spells = j.at("spells").get<std::vector<LolChampionsGameDataChampionSpell_t>>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.passive = j.at("passive").get<LolChampionsGameDataChampionSpell_t>();
    v.name = j.at("name").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.skins = j.at("skins").get<std::vector<LolChampionsGameDataChampionSkin_t>>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.alias = j.at("alias").get<std::string>();
  }
  inline std::string to_string(const LolChampionsGameDataChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
