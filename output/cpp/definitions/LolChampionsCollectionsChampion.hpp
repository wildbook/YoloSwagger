#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkin.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionSpell.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampion_t {
    bool freeToPlay;
    std::vector<std::string> roles;
    std::vector<std::string> disabledQueues;
    std::string stingerSfxPath;
    std::string name;
    LolChampionsCollectionsOwnership_t ownership;
    std::vector<LolChampionsCollectionsChampionSpell_t> spells;
    std::vector<LolChampionsCollectionsChampionSkin_t> skins;
    std::string banVoPath;
    uint64_t purchased;
    int32_t id;
    std::string squarePortraitPath;
    bool rankedPlayEnabled;
    bool active;
    LolChampionsCollectionsChampionSpell_t passive;
    std::string chooseVoPath;
    bool botEnabled;
    std::string alias;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampion_t& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["roles"] = v.roles;
    j["disabledQueues"] = v.disabledQueues;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["spells"] = v.spells;
    j["skins"] = v.skins;
    j["banVoPath"] = v.banVoPath;
    j["purchased"] = v.purchased;
    j["id"] = v.id;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["active"] = v.active;
    j["passive"] = v.passive;
    j["chooseVoPath"] = v.chooseVoPath;
    j["botEnabled"] = v.botEnabled;
    j["alias"] = v.alias;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampion_t& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.spells = j.at("spells").get<std::vector<LolChampionsCollectionsChampionSpell_t>>();
    v.skins = j.at("skins").get<std::vector<LolChampionsCollectionsChampionSkin_t>>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.id = j.at("id").get<int32_t>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.active = j.at("active").get<bool>();
    v.passive = j.at("passive").get<LolChampionsCollectionsChampionSpell_t>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.alias = j.at("alias").get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
