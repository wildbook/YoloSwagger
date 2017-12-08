#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionSpell.hpp"
#include "LolChampionsCollectionsChampionSkin.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampion_t {
    bool rankedPlayEnabled;
    std::string stingerSfxPath;
    std::string name;
    uint64_t purchased;
    bool botEnabled;
    std::vector<std::string> disabledQueues;
    std::string banVoPath;
    std::vector<LolChampionsCollectionsChampionSkin_t> skins;
    LolChampionsCollectionsChampionSpell_t passive;
    std::string alias;
    std::string chooseVoPath;
    std::vector<std::string> roles;
    LolChampionsCollectionsOwnership_t ownership;
    std::string squarePortraitPath;
    bool active;
    bool freeToPlay;
    int32_t id;
    std::vector<LolChampionsCollectionsChampionSpell_t> spells;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampion_t& v) {
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["name"] = v.name;
    j["purchased"] = v.purchased;
    j["botEnabled"] = v.botEnabled;
    j["disabledQueues"] = v.disabledQueues;
    j["banVoPath"] = v.banVoPath;
    j["skins"] = v.skins;
    j["passive"] = v.passive;
    j["alias"] = v.alias;
    j["chooseVoPath"] = v.chooseVoPath;
    j["roles"] = v.roles;
    j["ownership"] = v.ownership;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["active"] = v.active;
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
    j["spells"] = v.spells;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampion_t& v) {
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.skins = j.at("skins").get<std::vector<LolChampionsCollectionsChampionSkin_t>>();
    v.passive = j.at("passive").get<LolChampionsCollectionsChampionSpell_t>();
    v.alias = j.at("alias").get<std::string>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.active = j.at("active").get<bool>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.spells = j.at("spells").get<std::vector<LolChampionsCollectionsChampionSpell_t>>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
