#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionMinimal_t {
    LolChampionsCollectionsOwnership_t ownership;
    bool botEnabled;
    std::vector<std::string> disabledQueues;
    std::string alias;
    uint64_t purchased;
    int32_t id;
    std::string banVoPath;
    std::string squarePortraitPath;
    bool freeToPlay;
    std::string name;
    bool active;
    std::vector<std::string> roles;
    std::string chooseVoPath;
    std::string stingerSfxPath;
    bool rankedPlayEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionMinimal_t& v) {
    j["ownership"] = v.ownership;
    j["botEnabled"] = v.botEnabled;
    j["disabledQueues"] = v.disabledQueues;
    j["alias"] = v.alias;
    j["purchased"] = v.purchased;
    j["id"] = v.id;
    j["banVoPath"] = v.banVoPath;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["freeToPlay"] = v.freeToPlay;
    j["name"] = v.name;
    j["active"] = v.active;
    j["roles"] = v.roles;
    j["chooseVoPath"] = v.chooseVoPath;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionMinimal_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.alias = j.at("alias").get<std::string>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.id = j.at("id").get<int32_t>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.active = j.at("active").get<bool>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
  }
}
