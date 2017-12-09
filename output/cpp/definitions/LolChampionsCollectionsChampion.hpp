#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkin.hpp"
#include "LolChampionsCollectionsChampionSpell.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampion_t {
    LolChampionsCollectionsChampionSpell_t passive;
    std::string stingerSfxPath;
    LolChampionsCollectionsOwnership_t ownership;
    std::string chooseVoPath;
    std::string alias;
    bool active;
    std::vector<LolChampionsCollectionsChampionSkin_t> skins;
    bool freeToPlay;
    bool rankedPlayEnabled;
    uint64_t purchased;
    bool botEnabled;
    std::vector<LolChampionsCollectionsChampionSpell_t> spells;
    std::string squarePortraitPath;
    std::vector<std::string> disabledQueues;
    std::string name;
    std::vector<std::string> roles;
    int32_t id;
    std::string banVoPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampion_t& v) {
    j["passive"] = v.passive;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["ownership"] = v.ownership;
    j["chooseVoPath"] = v.chooseVoPath;
    j["alias"] = v.alias;
    j["active"] = v.active;
    j["skins"] = v.skins;
    j["freeToPlay"] = v.freeToPlay;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["purchased"] = v.purchased;
    j["botEnabled"] = v.botEnabled;
    j["spells"] = v.spells;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["disabledQueues"] = v.disabledQueues;
    j["name"] = v.name;
    j["roles"] = v.roles;
    j["id"] = v.id;
    j["banVoPath"] = v.banVoPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampion_t& v) {
    v.passive = j.at("passive").get<LolChampionsCollectionsChampionSpell_t>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.alias = j.at("alias").get<std::string>();
    v.active = j.at("active").get<bool>();
    v.skins = j.at("skins").get<std::vector<LolChampionsCollectionsChampionSkin_t>>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.spells = j.at("spells").get<std::vector<LolChampionsCollectionsChampionSpell_t>>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.name = j.at("name").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.id = j.at("id").get<int32_t>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
