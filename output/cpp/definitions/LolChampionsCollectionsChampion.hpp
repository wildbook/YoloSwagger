#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSpell.hpp"
#include "LolChampionsCollectionsChampionSkin.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampion_t {
    LolChampionsCollectionsOwnership_t ownership;
    bool active;
    std::string stingerSfxPath;
    LolChampionsCollectionsChampionSpell_t passive;
    std::string banVoPath;
    bool botEnabled;
    bool rankedPlayEnabled;
    std::string squarePortraitPath;
    std::string name;
    std::vector<std::string> disabledQueues;
    std::string chooseVoPath;
    std::vector<std::string> roles;
    int32_t id;
    std::string alias;
    std::vector<LolChampionsCollectionsChampionSpell_t> spells;
    std::vector<LolChampionsCollectionsChampionSkin_t> skins;
    uint64_t purchased;
    bool freeToPlay;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampion_t& v) {
    j["ownership"] = v.ownership;
    j["active"] = v.active;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["passive"] = v.passive;
    j["banVoPath"] = v.banVoPath;
    j["botEnabled"] = v.botEnabled;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["name"] = v.name;
    j["disabledQueues"] = v.disabledQueues;
    j["chooseVoPath"] = v.chooseVoPath;
    j["roles"] = v.roles;
    j["id"] = v.id;
    j["alias"] = v.alias;
    j["spells"] = v.spells;
    j["skins"] = v.skins;
    j["purchased"] = v.purchased;
    j["freeToPlay"] = v.freeToPlay;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampion_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.active = j.at("active").get<bool>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.passive = j.at("passive").get<LolChampionsCollectionsChampionSpell_t>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.id = j.at("id").get<int32_t>();
    v.alias = j.at("alias").get<std::string>();
    v.spells = j.at("spells").get<std::vector<LolChampionsCollectionsChampionSpell_t>>();
    v.skins = j.at("skins").get<std::vector<LolChampionsCollectionsChampionSkin_t>>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
