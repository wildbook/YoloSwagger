#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSpell.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionSkin.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampion_t {
    bool active;
    std::string alias;
    std::string banVoPath;
    bool botEnabled;
    std::string chooseVoPath;
    std::vector<std::string> disabledQueues;
    bool freeToPlay;
    int32_t id;
    std::string name;
    LolChampionsCollectionsOwnership_t ownership;
    LolChampionsCollectionsChampionSpell_t passive;
    uint64_t purchased;
    bool rankedPlayEnabled;
    std::vector<std::string> roles;
    std::vector<LolChampionsCollectionsChampionSkin_t> skins;
    std::vector<LolChampionsCollectionsChampionSpell_t> spells;
    std::string squarePortraitPath;
    std::string stingerSfxPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampion_t& v) {
    j["active"] = v.active;
    j["alias"] = v.alias;
    j["banVoPath"] = v.banVoPath;
    j["botEnabled"] = v.botEnabled;
    j["chooseVoPath"] = v.chooseVoPath;
    j["disabledQueues"] = v.disabledQueues;
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["passive"] = v.passive;
    j["purchased"] = v.purchased;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["roles"] = v.roles;
    j["skins"] = v.skins;
    j["spells"] = v.spells;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["stingerSfxPath"] = v.stingerSfxPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampion_t& v) {
    v.active = j.at("active").get<bool>();
    v.alias = j.at("alias").get<std::string>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.passive = j.at("passive").get<LolChampionsCollectionsChampionSpell_t>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.skins = j.at("skins").get<std::vector<LolChampionsCollectionsChampionSkin_t>>();
    v.spells = j.at("spells").get<std::vector<LolChampionsCollectionsChampionSpell_t>>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
  }
}
