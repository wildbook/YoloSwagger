#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSpell.hpp"
#include "LolChampionsCollectionsChampionSkin.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampion_t {
    LolChampionsCollectionsOwnership_t ownership;
    std::string squarePortraitPath;
    bool botEnabled;
    std::vector<std::string> disabledQueues;
    std::string alias;
    uint64_t purchased;
    std::vector<LolChampionsCollectionsChampionSpell_t> spells;
    int32_t id;
    std::string banVoPath;
    std::vector<LolChampionsCollectionsChampionSkin_t> skins;
    bool freeToPlay;
    std::string name;
    bool active;
    LolChampionsCollectionsChampionSpell_t passive;
    std::string chooseVoPath;
    std::string stingerSfxPath;
    std::vector<std::string> roles;
    bool rankedPlayEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampion_t& v) {
    j["ownership"] = v.ownership;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["botEnabled"] = v.botEnabled;
    j["disabledQueues"] = v.disabledQueues;
    j["alias"] = v.alias;
    j["purchased"] = v.purchased;
    j["spells"] = v.spells;
    j["id"] = v.id;
    j["banVoPath"] = v.banVoPath;
    j["skins"] = v.skins;
    j["freeToPlay"] = v.freeToPlay;
    j["name"] = v.name;
    j["active"] = v.active;
    j["passive"] = v.passive;
    j["chooseVoPath"] = v.chooseVoPath;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["roles"] = v.roles;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampion_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.alias = j.at("alias").get<std::string>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.spells = j.at("spells").get<std::vector<LolChampionsCollectionsChampionSpell_t>>();
    v.id = j.at("id").get<int32_t>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.skins = j.at("skins").get<std::vector<LolChampionsCollectionsChampionSkin_t>>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.active = j.at("active").get<bool>();
    v.passive = j.at("passive").get<LolChampionsCollectionsChampionSpell_t>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
  }
}
